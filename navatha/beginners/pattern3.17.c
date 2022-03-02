#include <stdio.h>
int main()
{
    int i,j,n=3,k,c=65;
    for(i=0;i<=(n-1);i++)
    {
        for(j=1;j<=(n-i);j++)
       {
            printf("%c",c);
            c++;
        }
        for(k=i;k>=1;k--)
        printf("  ");
        printf("\b");
        for(j=(n-i);j>=1;j--)
       {
            c--;
            printf("%c",c);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       {
            printf("%c",c);
            c++;
        }
        for(k=1;k<=(n-i);k++)
        printf("  ");
        printf("\b");
        for(j=i;j>=1;j--)
       {
            c--;
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
