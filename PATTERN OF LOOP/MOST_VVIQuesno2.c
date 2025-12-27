// FOR ---> 1
//        1 2 1
//       1 2 3 2 1
//     1 2 3 4 3 2 1 

#include<stdio.h>
int main(){

int n ; 
printf("Enter your number ");
scanf("%d",&n);
    int nsp =  n - 1 ;
for (int i =1 ; i<=n ; i++){
        int a = i-1 ;       int b = i-1;    int m = 1 ;
    for (int j = 1 ; j<=nsp ; j++){
        printf(" "); 
    }
    nsp -- ;

    for (int k = 1 ; k<=i ; k++){
        printf("%d",m);
            m++ ;
    }
   
    for (int l = 1 ; l<=a ; l++){
              
            printf("%d",b);
         b-- ;
             
    }
       printf("\n");
}


    return 0 ;
}