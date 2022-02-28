#include<stdio.h>
int main()
{
        int i,j,n,x,y,t;
        n=5;
        x=5;
        y=1;
         t=5;
       int  space=0;
        for(i=1;i<=n;i++)
         {
                 for(j=1;j<=x;j++)
                 {
                         printf("%d",j);
                }

                for(i=0;i<space;i++)
                {
                        printf(" ");

                }
                space++;
                 for(j=t;j>=y ;j--)
                {
                      if(j==5)
                      {

                      }
                      else
                      {
                        printf("%d",j);
                      }
                }
               t=t-1;
               x--;
                 printf("\n");
         }

}
