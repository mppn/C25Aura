#include <stdio.h>

int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
       printf("%d",i);
    }
    for(j=n-1;j>=1;j--)
    {
       printf("%d",j);
    }
    printf("\n");    
    return 0;
}
