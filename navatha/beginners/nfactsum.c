#include <stdio.h>
int fact(int);
int main()
{
    int i,f,n=5,s=0;
    for(i=1;i<=n;i++)
    {
        f=fact(i);
        s=s+f;
    }
     printf("the sum of factorials of %d numbers is %d",n,s);
     printf("\n");
     return 0;
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
