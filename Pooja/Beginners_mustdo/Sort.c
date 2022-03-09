#include<stdio.h>
int main()
{
   int i,j,t,n=6;
   int a[10]={2,3,7,6,5,8};
   for(i=0;i<=n-1;i++)
   {
       for(j=i+1;j<=n-1;j++)
       {
           if(a[i]<a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
    
}
