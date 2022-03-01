#include <stdio.h>

int main()
{
int i,n,factorial=1;
printf("\n enter the no : ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    factorial=factorial*i;
}
printf("\n%d! =%d",n,factorial);
}
