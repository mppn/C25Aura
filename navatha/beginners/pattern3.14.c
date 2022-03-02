#include <stdio.h>
int main()
{
    int i,j,n=5,k;
    for(i=0;i<=(n-1);i++)
    {
        for(j=1;j<=(n-i);j++)
       {
            printf("%d",j);
        }
        for(k=i;k>=1;k--)
        printf("  ");
        printf("\b");
        for(j=(n-i);j>=1;j--)
       {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
