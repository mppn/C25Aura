#include<stdio.h>

int main() 
{
    int a=426,c;
    int sum=0;
    while(a>0)
    {
        c=a%10;
        sum=sum+c;
        a=a/10;
    }
    printf("Sum of digits is %d\n",sum);
}
