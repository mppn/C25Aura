#include<stdio.h>

int main() 
{
    int a=626,c,n;
    n=a;
    while(a>0)
    {
      c=(c*10)+(a%10);
      a=a/10;
    }
    if(n==c)
    {
        printf("Number is a Palindrome");
    }
    else
    {
        printf("Number is a not Palindrome");
    }
}
