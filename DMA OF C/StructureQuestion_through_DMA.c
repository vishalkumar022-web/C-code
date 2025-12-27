#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student{
    char name[20];
    int id ;
}student ;

int main(){

student*arr = (student*)malloc(1*sizeof(student));
printf("Enter your name");
fgets(arr->name,sizeof(arr->name),stdin);
printf("Enter your id ");
scanf("%d",&arr->id);

printf("\nName = %s  \n  id = %d ",arr->name,arr->id);

    return 0 ;
}