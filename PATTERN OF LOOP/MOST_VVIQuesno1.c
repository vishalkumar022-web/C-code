//FOR :---->   1  
//             1 2 1 
//             1 2 3 2 1 
//             1 2 3 4 3 2 1 
//             1 2 3 4 5 4 3 2 1 
 
#include<stdio.h>
int main(){

int n ; 
printf("Enter your number ");
scanf("%d",&n);
 
for (int i =1 ; i<=n ; i++){
    int a = i-1 ;     int b = i-1 ;
    for (int j = 1 ; j<=i ; j++){
        printf("%d ",j);
    }
    for (int k = 1 ; k<=a ; k++ ){
            printf("%d ",b);
            b-- ;
   }
        printf("\n");
}
    return 0 ;
}