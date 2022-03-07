#include <stdio.h>
char *index(char *s,char c)
{
    int i;
    for(i=0;s[i]!=c&&s[i]!='\0';i++)
    {
    
        
    }
    
    return &s[i];
}

int main()
{
    char s1[30]={"ride next"};
    char c='d';
    int result;
    result=index(s1,c);
    printf("%d",result);
    
}
