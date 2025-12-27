#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct stdent_detail{
    char name[50];
    int id ;
}detail;

void input(detail arr[],int n){
        for(int i = 0 ;i<n ;i++){
           
            printf("Enter your name ");
             getchar();
            fgets(arr[i].name,sizeof(arr[i].name),stdin);
            printf("Enter your id ");
            scanf("%d",&arr[i].id);
            
   }
}

void sort(detail arr[],int n ){
    for(int i = 0 ;i<n ; i++){
        for (int j = i+1 ; j<n ;j++){
            if(strcmp(arr[i].name,arr[j].name)>0){
                detail temp  = arr[i];
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }
}

void output(detail arr[], int n){
    for (int i = 0 ;i<n ;i++){
        printf("%s   %d ",arr[i].name,arr[i].id);
    }
}

int main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
detail *arr = (detail*)malloc(n*sizeof(detail));

detail x[n] ;

input(x,n);
sort(x,n);
output(x,n);

    return 0 ;
}