#include<stdio.h>
int first()
{
         int i,j,n,x,y,t;
        n=5;
        x=5;
        y=1;
         t=5;
       int  space=0;
        for(i=1;i<=n-2;i++)
         {
                 for(j=1;j<=x;j++)
                 {
                         printf("%d",j);
                }

                for(i=0;i<space;i++)
                {
                        if(i==0)
                        {
                         printf(" ");
                        }
                        else
                        {
                        printf("  ");
                        }

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
int second()
{

        int i,j,x=1;
        int y=1,t=1,space,z=4;

        for(i=1;i<=5;i++)
        {
                for(j=1;j<=x;j++)
                {
                printf("%d",j);
                }
               for(space=z;space!=0;space--)
               {
                       if(space!=1)
                       {
                       printf("  ");
                       }
                       else
                       {
                               printf(" ");
                       }
               }
               z--;

                for(j=t;j!=0;j--)
                {
                        if(j!=5)
                        {
                        printf("%d",j);
                        }
                }
                y++;
                 x++;
                 t++;
                 printf("\n");

        }


}



int main()
{
first();
second();
}
