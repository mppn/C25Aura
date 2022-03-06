#include <stdio.h>

int main()
{
int i=1,n=5,j=(n/2)+1,m;
int a[10][10];
{
    for(m=1;m<=n*n;m++)
    {
        a[i][j]=m;
        i--;
        j++;
        if(m%n==0)
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

}
