#include <stdio.h>

int main()
{
   
    int i, j, n=5,k;
    for(i=0;i<=n-1;i++)
    {
        for(k=0;k<=i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=n-i;j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }

    return 0;
}
