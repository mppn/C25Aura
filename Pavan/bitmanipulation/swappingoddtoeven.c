#include <stdio.h>

int main() {
    int a, b = 0xaaaaaaaa, c = 0x55555555;
    printf("\n enter the number: \n");
    scanf("%d", & a);
    a = ((a & b) >> 1) | ((a & c) << 1);
    printf("\n %d\n", a);
}
