#include <stdio.h>
void Fibonacci(int n)
{

    int a = 0;
    int b = 1;
    int sum;
    for (int i = 1 ; i<=n ; i++)
   
    {

        printf("the given fibonacci Range is = %d \n", a);
        sum = a + b;
        a = b;
        b = sum;
    }
}

int main()
{

    int  n;
    printf("Enter your numbers ");
    scanf("%d", &n);
    Fibonacci(n);

    return 0;
}
