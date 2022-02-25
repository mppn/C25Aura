#include <stdio.h>

int main()
{
    int s=0,n=636, a=n;
    while(a>0)
    {
    s=(s*10)+(a%10);
    a=a/10;
    }
    
    if(s==n)
    {
    printf(" %d is a palindrome", n);
    }
    else
    {
    printf(" %d is not a palindrome", n);
    }
    printf("\n");
    return 0;
}

