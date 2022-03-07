#include <stdio.h>
char *print(char *s, char c)
{
    int i=0,j;
    while(s[i]!='\0')
    {
        i++;
        
    }
   // printf("%d",i);
    for(j=i-1;s[j]!=c&&j>=0;j--)
    {
        
    }
   return &s[j];
    
    
}

int main()
{
    char s1[30]={"ride next"};
     char c='x';
    int result;
  result=print(s1,c);
   printf("%d",result);
    
}

