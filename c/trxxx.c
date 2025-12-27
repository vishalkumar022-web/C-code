//                ***LIBRARY MANAGEMENT SYSTEM***

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Book structure
struct Book {
    int id;
    char name[50];
    char author[50];
    char status[50]; 
};

// Add a new book
void addBook() {
    FILE *fp = fopen("books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    getchar(); // clear buffer
    printf("Enter Book Name: ");
    fgets(b.name, sizeof(b.name), stdin);
    b.name[strcspn(b.name, "\n")] = '\0'; // remove newline
    printf("Enter Author Name: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = '\0';

    strcpy(b.status, "Available"); // Pahle sara book availlable hi rahega..

    fprintf(fp, "%d,%s,%s,%s\n", b.id, b.name, b.author, b.status);
    fclose(fp);

    printf("Book added successfully!\n");
}

// View all books
void viewBooks() {
    FILE *fp = fopen("books.txt", "r");
    if (fp == NULL) {
        printf("No books found!\n");
        return;
    }
 char ch ;
    printf("\n--- All Books in Library ---\n");
    while ((ch=fgetc(fp))!= EOF) {
        printf("%c",ch);
    }

    fclose(fp);
}             //fscanf(fp, "%49[^,]", str);
// Matlab: string me maximum 49 characters daalo jab tak comma na aa jaye Agar comma aa gaya
//  toh wahi stop kar do (comma ko consume nahi karega, usse agla fscanf handle karega).
                    
// Search a book by ID
void searchBook() {
    FILE *fp = fopen("books.txt", "r");
    if (fp == NULL) {
        printf("No books found!\n");
        return;
    }

    int id, found = 0;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    struct Book b;
    while (fscanf(fp, "%d, %49[^,], %49[^,], %s", &b.id, b.name, b.author, b.status) != EOF) {
        if (b.id == id) {
            printf("Book Found-> ID=%d, Name=%s, Author=%s, Status=%s\n",
                   b.id, b.name, b.author, b.status);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found in library!\n");
    }

    fclose(fp);
}

// Issue a book
void issueBook() {
    FILE *fp = fopen("books.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL) {
        printf("No books found!\n");
        return;
    }

    int id, found = 0;
    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    struct Book b;
    while (fscanf(fp, "%d, %49[^,], %49[^,], %s", &b.id, b.name, b.author, b.status) != EOF) {
        if (b.id == id) {
            found = 1;
            if (strcmp(b.status, "Available") == 0) {
                strcpy(b.status, "Issued");
                printf("Book issued successfully!\n");
            } else {
                printf("Book already issued \n");
            }
        }
        fprintf(temp, "%d,%s,%s,%s\n", b.id, b.name, b.author, b.status);
    }

    if (!found) {
        printf("Book not found!\n");
    }

    fclose(fp);
    fclose(temp);
    remove("books.txt");
    rename("temp.txt", "books.txt");
}

// Return a book
void returnBook() {
    FILE *fp = fopen("books.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL) {
        printf("No books found!\n");
        return;
    }

    int id, found = 0;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    struct Book b;
    while (fscanf(fp, "%d, %49[^,], %49[^,], %s", &b.id, b.name, b.author, b.status) != EOF) {
        if (b.id == id) {
            found = 1;
            if (strcmp(b.status, "Issued") == 0) {
                strcpy(b.status, "Available");
                printf("Book returned successfully!\n");
            } else {
                printf("This book was not issued!\n");
            }
        }
        fprintf(temp, "%d,%s,%s,%s\n", b.id, b.name, b.author, b.status);
    }

    if (!found) {
        printf("Book not found!\n");
    }

    fclose(fp);
    fclose(temp);
    remove("books.txt");
    rename("temp.txt", "books.txt");
}

// Delete a book
void deleteBook() {
    FILE *fp = fopen("books.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL) {
        printf("No books found!\n");
        return;
    }

    int id, found = 0;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    struct Book b;
    while (fscanf(fp, "%d, %49[^,], %49[^,], %s", &b.id, b.name, b.author, b.status) != EOF) {
        if (b.id == id) {
            found = 1;
            printf("Book deleted successfully!\n");
            continue; // skip writing this book to new file
        }
        fprintf(temp, "%d,%s,%s,%s\n", b.id, b.name, b.author, b.status);
    }

    if (!found) {
        printf("Book not found!\n");
    }

    fclose(fp);
    fclose(temp);
    remove("books.txt");
    rename("temp.txt", "books.txt");
}

int main() {
    int choice;

    while (1) {
        printf("\n====== Library Management System ======\n");
        printf("1. Add New Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: addBook(); break;
        case 2: viewBooks(); break;
        case 3: searchBook(); break;
        case 4: issueBook(); break;
        case 5: returnBook(); break;
        case 6: deleteBook(); break;
        case 7: printf("Library closed ");
             exit(0);
        default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
//                     ****  MOST VVI NOTE :--->  ****
// %49[^, ] me jo number hai wo aapki marzi ka hai, bas aapke array ke size se 
//Bada nahi hona chahiye. Agar array 50 size ka hai → %49  Agar array 200 size ka hai → %199