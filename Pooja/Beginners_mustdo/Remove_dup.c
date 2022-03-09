#include<stdio.h>
int main()
{
    int i,j,k;
    int n=5;
    int a[10]={6,3,5,3,8};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                i--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]); 
    }
    
}
