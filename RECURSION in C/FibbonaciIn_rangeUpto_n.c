// Fibonacci up-to nth terms ;

#include <stdio.h>
int fibbo(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibbo(n - 1) + fibbo(n - 2);
  }
}
int main()
{
  int n;
  printf("Enter your number ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {

    int x = fibbo(i);

    printf("%d  ", x);
  }

  return 0;
}