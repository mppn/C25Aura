#include<stdio.h>
int main()
{
        int i,j,n,x;
        n=5;
        x=1;
        for(i=1;i<=n;i++)
        {
                for(j=5;j>=x ;j--)
                {
                        printf("%d",j);
                }
                x++;
                printf("\n");
        }
}
