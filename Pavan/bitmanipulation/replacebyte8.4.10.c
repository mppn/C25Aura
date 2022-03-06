#include<stdio.h>

int replaceByte(int x, int n, int c) 
{
    int shift = (c << (8 * n));
    int mask = 0xff << shift;
    return (~mask & x) | shift;
}

int main ()
{

    printf("%X",replaceByte(0x80000000,0,0));

    return 0;
}
