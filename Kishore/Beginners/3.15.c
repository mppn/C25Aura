#include<stdio.h>
  void main()
 {
     int i,j,k,n,t,p,q;
     n=5;
     t=1;
     q=2;
     for(i=1;i<=5;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf("%d",j);
         }
         for(p=q;p<=n;p++)
         {
             if(p!=n)
             {
             printf("  ");  
             
             }
             else
             {
                 printf(" ");
             }
         }
         q=q+1;
         for(k=t;k>=1;k--)
         {
             if(k!=5)
             {
             printf("%d",k);
             }
         }
         t=t+1;
         printf("\n");
     }
     
 }
