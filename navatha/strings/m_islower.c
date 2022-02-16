#include <stdio.h>
int islower(int);
int main()
{
    int a;
    char s='a';
    a=islower(s);
    if(a==1)
    printf("'%c' is a lower case alphabet", s);
    else
    printf("'%c' is not a lower case alphabet", s);
    printf("\n");
    return 0;
}
