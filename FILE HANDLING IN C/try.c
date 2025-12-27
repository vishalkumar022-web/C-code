#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student {
    char name[50];
    int age;
    int id;
    char course[50];
} detail;

void remove_newline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

void add_student() {
    FILE* fp;
    fp = fopen("students.txt", "a");
    detail s;
    printf("Enter your student's name: ");
    getchar();
    fgets(s.name, sizeof(s.name), stdin);
    remove_newline(s.name);
    printf("Enter your age: ");
    scanf("%d", &s.age);
    getchar();
    printf("Enter your course: ");
    fgets(s.course, sizeof(s.course), stdin);
    remove_newline(s.course);
    printf("Enter your id: ");
    scanf("%d", &s.id);

    fprintf(fp, "%s %d %s %d\n", s.name, s.age, s.course, s.id);
    fclose(fp);
}

void view_student() {
    char ch;
    FILE* sp;
    sp = fopen("students.txt", "r");
    while ((ch = fgetc(sp)) != EOF) {
        printf("%c", ch);
    }
    fclose(sp);
}

void search_student() {
    detail s;
    int id;
    int flag = 0;
    printf("Enter your id: ");
    scanf("%d", &id);
    FILE* dp;
    dp = fopen("students.txt", "r");
    while (fscanf(dp, "%s %d %s %d", s.name, &s.age, s.course, &s.id) != EOF) {
        if (s.id == id) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("%d id student is present\n", id);
    } else {
        printf("No student matches this id\n");
    }
    fclose(dp);
}

void update_detail() {
    FILE* cp;
    detail s;
    cp = fopen("students.txt", "r");
    FILE* ap;
    ap = fopen("update.txt", "w");

    int id;
    printf("Enter your id: ");
    scanf("%d", &id);
    getchar();

    while (fscanf(cp, "%s %d %s %d", s.name, &s.age, s.course, &s.id) != EOF) {
        if (s.id == id) {
            printf("Enter your new student's name: ");
            fgets(s.name, sizeof(s.name), stdin);
            remove_newline(s.name);
            printf("Enter your new age: ");
            scanf("%d", &s.age);
            getchar();
            printf("Enter your new course: ");
            fgets(s.course, sizeof(s.course), stdin);
            remove_newline(s.course);
            printf("Enter your new id: ");
            scanf("%d", &s.id);
        }
        fprintf(ap, "%s %d %s %d\n", s.name, s.age, s.course, s.id);
    }
    fclose(cp);
    fclose(ap);
    remove("students.txt");
    rename("update.txt", "students.txt");
}

void Delete_detail() {
    FILE* mp;
    detail s;
    mp = fopen("students.txt", "r");
    FILE* bp;
    bp = fopen("afterDeletion.txt", "w");

    int id;
    int flag = 0;
    printf("Enter your id: ");
    scanf("%d", &id);

    while (fscanf(mp, "%s %d %s %d", s.name, &s.age, s.course, &s.id) != EOF) {
        if (s.id == id) {
            flag = 1;
            continue;
        }
        fprintf(bp, "%s %d %s %d\n", s.name, s.age, s.course, s.id);
    }
    fclose(mp);
    fclose(bp);
    remove("students.txt");
    rename("afterDeletion.txt", "students.txt");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. For add student\n");
        printf("2. For view all students\n");
        printf("3. Search a student by its id\n");
        printf("4. Update a student by its id\n");
        printf("5. Delete a student by its id\n");
        printf("6. For exiting from file\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: add_student(); break;
            case 2: view_student(); break;
            case 3: search_student(); break;
            case 4: update_detail(); break;
            case 5: Delete_detail(); break;
            case 6: exit(0);
            default: printf("You entered wrong choice\n");
        }
    }
    return 0;
}
