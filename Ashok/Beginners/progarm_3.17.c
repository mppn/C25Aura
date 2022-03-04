#include<stdio.h>
int first()
{
        int i,j,t=68,t1=67,space=1;
        for(i=0;i<3;i++)
        {
                for(j=65;j!=t;j++)
                {
                printf("%c",j);
                }
                t--;
                if(space==i)
                {
                        for(int k=1;k<=space;k++)
                        {
                                printf(" ");
                        }
                        space++;

                }

                for(j=t1;j!=64;j--)
                {
                 if(j!=67)
                 {
                    printf("%c",j);
                 }

                }
                t1--;
                printf("\n");

        }
//         printf("\n");

}


int second()
{
int i,j,t=66;
for(i=1;i<=2;i++)
{
        for(j=65;j<=t;j++ )
        {
         printf("%c",j);
        }
        if(i==1)
        {
                printf(" ");
        }
         for(j=66;j!=64;j--)
       {
         printf("%c",j);
       }

        printf("\n");
        t++;




}
}
int main()
{

first();
second();



}
