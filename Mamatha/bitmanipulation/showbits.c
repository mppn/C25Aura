#include <stdio.h>
void showbits (int n)
{
  int i, k, mask;
  for (i = 15; i >= 0;i--)
  {
    mask = 1 << i;
    k = n & mask;
    k == 0 ? printf ("0") : printf ("1");
  }
}
int main()
{
  showbits(5);   
  return 0;
}
