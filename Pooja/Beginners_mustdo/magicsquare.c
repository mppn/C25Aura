# include <stdio.h>
int main()
{
    int n=7,i,j,c,a[10][10];
    j=(n+1)/2,i=1;
    for(c=1;c<=n*n;c++)
    {
        a[i][j]=c;
        if(c%n==0)
        {
            i=(i+1);
            
        }
        if(i==1)
        {
            i=n;
        }
        else
        {
            i=i-1;
        }
        if(j==n)
        {
          j=1;  
        }
        else
        {
            j=j+1 ;
        }
        
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf("%d\t",a[i][j]) ;
        }
        printf("\n") ;
        
    }
    
} 
