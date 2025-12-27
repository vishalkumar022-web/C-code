#include<stdio.h>
void Pattern(int n  ){
    int a = n ;   int b = 65 ;
    for(int i =1 ; i<=n ;i++){
        int c = 1 ;
        for (int j = 1 ; j<=a ; j++){
            if (i==1 || i==n ){
                printf("%c",b);
                b++ ;
            }
            else {
                printf("%d",c);
                c++ ;
            }
        }
        a-- ;
        printf("\n");
    }
}
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

Pattern(n);

    return 0 ;
}