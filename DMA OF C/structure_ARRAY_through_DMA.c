#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student{
    char name[20];
    int id ;
}student ;

int main(){
int n ;
printf("Enter your number ");
scanf("%d",&n);

student*arr = (student*)calloc(n,sizeof(student));// malloc se karna hai toh waha calloc ke place par malloc(n*sizeof(student)); Hoga only:-->  
for (int i = 0 ;i<n ;i++){
printf("Enter your name");
getchar();
fgets(arr[i].name,sizeof(arr[i].name),stdin);
printf("Enter your id ");
scanf("%d",&arr[i].id);}

for(int i = 0 ;i<n ;i++){
printf("\nName = %s  \n  id = %d ",arr[i].name,arr[i].id);
}
    return 0 ;
}