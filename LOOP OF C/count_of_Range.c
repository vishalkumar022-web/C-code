#include<stdio.h>
int main(){ 
int i ; 
printf("Enter your 1st number ");
scanf("%d",&i);
int n ;
printf("Enter   your 2nd number ");
scanf("%d",&n);

while (i<=n){
    int count = 0 ;
    for (int a = i ; a>0 ; count++){   
        a = a/10 ;
    }
    printf("count of %d is = %d\n",i , count );
            i++ ; 

}

    return 0 ;
}