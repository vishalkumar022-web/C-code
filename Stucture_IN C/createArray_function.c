#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[20];
    int roll ;
    float marks ;
}student;

void input(student x[], int n ){
    for(int i =0 ;i<n ;i++){
        getchar();    
    printf("Enter your name ");
    fgets(x[i].name,sizeof(x[i].name),stdin);
    printf("Enter your roll ");
    scanf("%d",&x[i].roll);
    printf("Enter your marks ");
    scanf("%f",&x[i].marks);
       
    
}
}
void output(student u[], int n ){
    for(int i =0 ;i<n ;i++){
    printf("\n%s  \n%f  \n %d ",u[i].name,u[i].marks,u[i].roll);
}}

int main(){

    int n ;
    printf("Enter your size of array ");
    scanf("%d",&n);

    student arr [n];
    input(arr,n);
    output(arr,n);
    return 0 ;
}