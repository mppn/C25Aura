#include <stdio.h>

int main()
{
    int s=0,n=426, a=n;
    while(a>0)
    {
    s=(s*10)+(a%10);
    a=a/10;
    }
    printf("reverse of number %d is %d",n,s);
    printf("\n");
    return 0;
}

