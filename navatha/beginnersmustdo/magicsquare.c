#include <stdio.h>

int main()
{
int i=1,n=5,j=(n/2)+1,k;
int a[10][10];
{
    for(k=1;k<=n*n;k++)
    {
        a[i][j]=k;
        i--;
        j++;
        if(k%n==0)
        {
            i=i+2;
            j--;
        }
        if (j==(n+1))
        j=1;
        if(i<=0)
        i=n;
    }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                {
                     printf("%d\t",a[i][j]); 
                }
             printf("\n");
        }
}
return 0;
}
