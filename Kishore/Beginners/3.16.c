#include<stdio.h>


  void main()
 {
     function1();
     function2();
 }

int function1()
{
    int i,j,n,l;
       int k=1,t=5,s=5;
       n=5;
      for(i=1;i<=n;i++) 
       {
            
           for(j=1;j<=s;j++) 
           {
              printf("%d",j);
           }
           s=s-1;
          for(l=1;l<=i-1;l++)
          {
              if(l!=1)
              {
                 printf("  ");
              }    
              else
              {
                printf(" ");
              }
          }
              
        
        
         for(k=t;k>=1;k--)
          {
             if(k!=5)
             {
                 printf("%d",k);
             }
           
            
          }
         t=t-1;
          printf("\n");
     } 
        
  
}
int function2()
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
