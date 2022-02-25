#include <stdio.h>

int main()
{
    int n=5,i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d factorial is %d\n",n,f);

    return 0;
}

