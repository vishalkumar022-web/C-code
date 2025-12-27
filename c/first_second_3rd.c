#include <stdio.h>
int main()
{

    int a, b, c;
    printf("enter the marks of a , b , c ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a > b) && (a>c))
    {
        if (b > c)
        {
            printf("a is 1st , b is 2nd and c is 3rd ");
        }
        else
        {
            (printf("a is 1st, c is 2nd and b is 3rd "));
        }
    }
    else
    {
        if ((b > a)&& (b>c))
        {
            if (a > c)
            {
                printf("b is 1st , a is 2nd and c is 3rd");
            }
            else
            {
                printf("b is 1st , c is 2nd and a is 3rd");
            }
        }
        else
        {
            if ((c > a) && (c>b))
            {
                if (a > b)


                
                {
                    printf("c is 1st , a is 2nd and b is 3rd");
                }
                else
                {
                    printf("c is 1st, b is 2nd and a is 3rd");
                }
            }
        }
    }

    return 0;
}