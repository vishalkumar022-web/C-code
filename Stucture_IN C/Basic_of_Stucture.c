#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[20];
    int roll ;
    int marks ;
}student;
int main(){

student x ;
// for user input :- 
printf("Enter the name ");
fgets(x.name,sizeof(x.name),stdin);
printf("Enter your roll_number ");
scanf("%d",&x.roll);
printf("Enter your marks ");
scanf("%d",&x.marks);

printf("\n%s   %d  \n  %d ",x.name,x.roll,x.marks);

    return 0 ;
}