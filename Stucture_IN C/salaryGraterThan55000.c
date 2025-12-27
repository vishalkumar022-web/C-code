#include<stdio.h>
#include<string.h>
typedef struct employee{
    char name[20];
    int id ;
    int salary ;
}employee;
void input(employee x[], int n ){
    
    for (int i =0 ;i<n ;i++){
    printf("Enter your name ");
    fgets(x[i].name,sizeof(x[i].name),stdin);
    printf("Enter your id ");
    scanf("%d",&x[i].id);
    printf("Enter your salary");
    scanf("%d",&x[i].salary);
    getchar();
}
}

int main(){

employee x[3];
input(x,3);

for(int i =0 ;i<3 ;i++){
    printf("\nName : %s  \nid : %d  \n  salary : %d ",x[i].name,x[i].id,x[i].salary);
}
printf("\nname of those person whoose salary is grater than 55000\n");
for(int i =0 ; i<3;i++){
     if(x[i].salary>55000){
        printf(" %s  ",x[i].name);
    }
}
return 0 ;
}