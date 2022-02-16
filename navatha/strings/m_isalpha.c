#include <stdio.h>
int isalpha(int);
int main()
{
    int a;
    char s='1';
    a=isalpha(s);
    if(a==1)
    printf("'%c' is an alphabet", s);
    else
    printf("'%c' is not an alphabet", s);
    printf("\n");
    return 0;
}
