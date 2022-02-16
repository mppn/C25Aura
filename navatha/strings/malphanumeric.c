#include <stdio.h>
int alphanumeric(int);
int main()
{
    int a;
    char s='+';
    a=alphanumeric(s);
    if(a==1)
    printf("'%c' alphanumeric", s);
    else
    printf("'%c' not is alphanumeric", s);
    printf("\n");
    return 0;
}
