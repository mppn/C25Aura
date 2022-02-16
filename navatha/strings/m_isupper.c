#include <stdio.h>
int is_upper(int);
int main()
{
    int a;
    char s='A';
    a=is_upper(s);
    if(a==1)
    printf("'%c' is a upper case alphabet", s);
    else
    printf("'%c' is not a upper case alphabet", s);
    printf("\n");
    return 0;
}
