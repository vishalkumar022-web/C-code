#include<stdio.h>
#include<string.h>

typedef struct students{
    char name[20];
    int roll;
    char departement[20] ;
}student;


int flag = 1 ;
void input (student*p,student*q){
    
if(strcmp(p->departement,q->departement)==0){
    flag = 0 ;
}
if (flag==0){
    printf("%s  %s both are same department ",p->departement ,q->departement);
}
else{
    printf("%s  %s both are not same departemet ",p->departement,q->departement);
}
}

int main(){

student x ,y ;
printf("Enter your name ");
fgets(x.name,sizeof(x.name),stdin);
printf("Enter your department ");
fgets(x.departement,sizeof(x.departement),stdin);
printf("Enter your roll_number ");
scanf("%d",&x.roll);

getchar();

printf("Enter your name ");
fgets(y.name,sizeof(y.name),stdin);
printf("Enter your department ");
fgets(y.departement,sizeof(y.departement),stdin);
printf("Enter your roll_number ");
scanf("%d",&y.roll);

input(&x,&y);


    return 0 ;
}



// #include <stdio.h>

// // Step 1: Define the structure
// struct Student {
//     char name[50];
//     int marks[5];
// };

// // Step 2: Function to input all student data
// void inputStudentData(struct Student s[]) {
//     for (int i = 0; i < 3; i++) {
//         printf("Enter name: ");
//         scanf("%s", s[i].name);

//         printf("Enter marks for 5 subjects: ");
//         for (int j = 0; j < 5; j++) {
//             scanf("%d", &s[i].marks[j]);
//         }
//     }
// }

// // Step 3: Function to print all student data with sorted marks
// void printStudentData(struct Student s[]) {
//     for (int i = 0; i < 3; i++) {
//         // Sort marks using custom logic: x=0 to 5, y=x+1 to 5
//         for (int x = 0; x < 5; x++) {
//             for (int y = x + 1; y < 5; y++) {
//                 if (s[i].marks[x] > s[i].marks[y]) {
//                     int temp = s[i].marks[x];
//                     s[i].marks[x] = s[i].marks[y];
//                     s[i].marks[y] = temp;
//                 }
//             }
//         }

//         // Print name and sorted marks
//         printf("Student %d: Name: %s, Marks: ", i + 1, s[i].name);
//         for (int j = 0; j < 5; j++) {
//             printf("%d ", s[i].marks[j]);
//         }
//         printf("\n");
//     }
// }

// // Step 4: Main function
// int main() {
//     struct Student students[3];  // Declare array of 3 students

//     inputStudentData(students);     // Input data for all students
//     printStudentData(students);     // Print data with sorted marks

//     return 0;
// }