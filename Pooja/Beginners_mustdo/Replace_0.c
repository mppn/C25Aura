#include<stdio.h>
int main()
{
    int i,j,k;
    int n=7;
    int a[10]={6,3,5,3,8,6,9};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(n-2);i++)
    {
        for(j=i+1;j<=(n-1);j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]); 
    }
    
}
