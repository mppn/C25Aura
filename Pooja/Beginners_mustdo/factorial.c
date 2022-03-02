#include<stdio.h>

int main()
{
    int i,num=5,fact=1;
    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Fact 0f %d is : %d",num, fact);
}
