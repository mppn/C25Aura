
#include <stdio.h>
int fact(int);
int main()
{
    int i,n=5;
    for(i=1;i<=n;i++)
    {
        printf("%d,",fact(i));
    }
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
