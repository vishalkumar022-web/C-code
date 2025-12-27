//  FOR ---->   1 
//              A  B 
//              1  2  3 
//              A  B  C  D 
//              1  2  3  4  5  

#include<stdio.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

for(int i =1 ; i<=n ; i++){
        int a = 1 ;   int b = 65 ;
    for (int j= 1 ; j<=i ; j++){
        if (i%2 == 1 ){
            printf("%d ",a);
            a++ ;
        }
        else {
            printf("%c ",b);
                b++ ;
        }
    }
    printf("\n");
}

    return 0 ;
}