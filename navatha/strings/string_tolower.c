#include <stdio.h>
void strcopy(char[],char[]);

int main()
{
    int ind;
    char s1[120]="Ridenext";
    char s2[120];
    strcopy(s1,s2);
    printf("\n%s",s2);
    printf("\n");
    return 0;
}

void strcopy(char *x, char *y)
{
     int i=0;
     while(x[i]!='\0')
          {
               if(x[i]>='A' && x[i]<='Z')
               {
                  y[i]=x[i]+32;
                 }
               else if(x[i]>='a' && x[i]<='z')
               {
                     y[i]=x[i];
               }
            i++;
          }
 }
