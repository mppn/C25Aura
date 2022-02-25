#include<stdio.h>
int main()
{
        int i,j,n,x;
        n=5;
        x=5;
        for(i=1;i<=n;i++)
         {
                 for(j=1;j<=x;j++)
                 {

                         printf("%d",j);
                }
                 x--;
                 printf("\n");
                 for(j=1;j<=i;j++)
                 {
                         printf(" ");
                 }


         }

}
