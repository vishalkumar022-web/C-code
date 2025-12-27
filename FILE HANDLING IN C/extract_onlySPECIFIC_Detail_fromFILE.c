#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Student {
    int id;
    char name[50];
    float marks;
    char address[100];
};

int main() {
    FILE *fp;
    int n ;
    printf("Enter your number ");
    scanf("%d",&n);
        getchar();
    struct Student s[n] ;

    fp = fopen("Extract.txt", "w+");
    
        for (int i =0 ;i<n ;i++){
          // For input :-->  
            printf("Enter the student name ");
            fgets(s[i].name,sizeof(s[i].name),stdin);
            printf("Enter the student adress ");
            fgets(s[i].address,sizeof(s[i].address),stdin);
            printf("Enter the student id ");
            scanf("%d",&s[i].id);
            printf("Enter the student marks ");
            scanf("%f",&s[i].marks);
            getchar();   
        }
   
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d %s %f %s\n", s[i].id, s[i].name, s[i].marks, s[i].address);
    }

   
    rewind(fp);

    for (int i = 0; i < n ; i++) {
             fscanf(fp, "%d %s %f %s\n", &s[i].id, s[i].name, &s[i].marks, s[i].address);
                printf("%s\n", s[i].name);
    }

    fclose(fp);
    return 0;
}
