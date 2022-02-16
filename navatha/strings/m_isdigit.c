#include <stdio.h>
int isdigit(int);
int main()
{
    int a;
    char s='9';
    a=isdigit(s);
    if(a==1)
    printf("'%c' is a digit", s);
    else
    printf("'%c' is not a digit", s);
    printf("\n");
    return 0;
}
