#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[50];
    int id ;
    float marks ;
}student;

int main(){
int n ;
printf("Enter the number ");
scanf("%d",&n);
getchar();
FILE*fp ;
fp = fopen("student.txt","a");

student x[n];
for(int i = 0 ;i<n ;i++){
    printf("Enter your name ");
    fgets(x[i].name,sizeof(x[i].name),stdin);
    printf("Enter your id ");
    scanf ("%d",&x[i].id);
    printf("Enter your marks ");
    scanf("%f",&x[i].marks);
    getchar();
}

for(int i = 0 ;i<n ;i++){
    fprintf(fp,"Name of %d student is %s \n",i+1,x[i].name);
    fprintf(fp,"id of %d student is %d \n",i+1,x[i].id);
    fprintf(fp,"Marks of %d student is %f\n ",i+1,x[i].marks);
}

fclose(fp);

return 0 ;

}