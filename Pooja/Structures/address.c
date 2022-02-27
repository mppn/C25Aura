#include <stdio.h>

int main(void)
{
	int a;
	float b;
	char c;
	short d;

	printf("Address of a: %p\n", &a);
	printf("Address of b: %p\n", &b);
	printf("Address of c: %p\n", &c);
	printf("Address of d: %p\n", &d);

	return 0;
}


/*********output**********/
Address of a: 0x7fff1651fe30
Address of b: 0x7fff1651fe34
Address of c: 0x7fff1651fe2d
Address of d: 0x7fff1651fe2e
