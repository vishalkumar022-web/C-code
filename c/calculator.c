#include<stdio.h>
int main(){


    int a, b ;
    char c ;
    printf("Enter your number ");
    scanf("%d%d",&a,&b);
    
    printf("Enter your symbol ");

    scanf(" %c",&c);

    if (c=='+'){
        printf("sum = %d",a+b);
    }

else if(c == '-'){
    printf("difference = %d", a - b);
}
else if (c == '*'){
    printf("multiple = %d", a*b);
}



return 0 ;

}
