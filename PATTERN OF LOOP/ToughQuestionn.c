// 1234567891011
// 12345 7891011
// 1234   891011
// 123     91011
// 12       1011
// 1          11

#include<stdio.h>
int main(){
int n ;
printf("Enter your number ");
scanf("%d",&n);
int nsp = 1 ;
int a = n ;

for (int i = 1 ; i<=2*n+1 ; i++){
    printf("%d",i);
}
printf("\n");

for (int j = 1 ; j<=n ; j++ ){
    int b = 1 ;
    for(int m = 1 ; m<=a ;m++){
    printf("%d",b);
   b++ ;
    }


for(int k = 1 ; k<=nsp ;k++){
    printf(" ");
    b++ ;
   
}
for (int l = 1 ; l<=a ; l++ ){
    printf("%d",b);
   b++ ;
}
nsp+=2 ;
a-- ;
printf("\n");
}

    return 0 ;
}