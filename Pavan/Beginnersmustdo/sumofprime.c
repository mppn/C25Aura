#include<stdio.h>

int main()
{

  int n, i, j, p, s = 0;

  printf("Enter a number:");
  scanf("%d", &n);

  printf("List of prime numbers:");

  for (i = 2; i < n; i++)
  {
    p = 1;
    for (j = 2; j < i; j++)
    {
      if (i % j == 0) 
      {
        p = 0;
        break;
      }
    }
    if (p == 1) {
      printf("%d ", i);
      s = s + i;
    }
  }
  printf("\nSum of prime numbers:%d", s);

  return 0;
}
