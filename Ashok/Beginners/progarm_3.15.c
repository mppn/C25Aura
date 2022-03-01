#include<stdio.h>
int main()
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

//      x++;
//      printf("\n");
}
