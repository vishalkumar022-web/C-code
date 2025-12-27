#include <stdio.h>
void Fibonacci(int n,int m)
{
    int a = 0;
    int b = 1;
    int sum;
   while(a<=m){
    if (a>=n){
        printf("the given fibonacci Range is = %d \n", a);}
        sum = a + b;
        a = b;
        b = sum;}
   }


int main()
{

    int  n ,m ;
    printf("Enter your numbers ");
    scanf("%d%d", &n,&m);
    Fibonacci(n,m);

    return 0;
}
