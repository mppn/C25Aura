#include <stdio.h>

int main()
{
   
    int i, j, n=5;
    for(i=0;i<=n-1;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
