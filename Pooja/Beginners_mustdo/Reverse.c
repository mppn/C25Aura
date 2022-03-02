#include<stdio.h>

int main() {
    int a=876,c;
    while(a>0)
    {
        c=(c*10)+(a%10);
        a=a/10;
    }
    printf("Reverse of a number is %d\n",c);
}
