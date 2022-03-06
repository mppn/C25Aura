#include<stdio.h>
int main()
{
    function1();
    function2();
}
 int function1()
    {
         int i,j,k,t,m,l;
         int n=3;
         t=67;
         m=67;
         for(i=1;i<=n-1;i++)
         {
            for(j=65;j<=t;j++)
            {
              printf("%c",j);
            }
            t--;
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
            for(k=m;k>=65;k--)
            {
                if(k!=67)
                 {
                     printf("%c",k);
                 }
                
             
            }
              
            printf("\n");
            m=m-1;
            
         }
         
    }    
   int function2()
   {
       int i,j,k,t,s,p,l,n,r;
       t=65;
       p=65;
       s=65;
       n=3;
       r=2;
       for (i=1;i<=3;i++)
       {
            for(j=p;j<=s;j++)
            {
                printf("%c",j);
            }
            s=s+1;
            
             for(l=r;l<=n;l++)
               if(l!=n)
               {
                   printf("  ");
               }
               else
               {
                   printf(" ");
               }
               r=r+1;
            
            for(k=t;k>=65;k--)
            {
                if(k!=67)
                {
                printf("%c",k);
                }
            }
            t=t+1;
            printf("\n");
       }
   }

            
