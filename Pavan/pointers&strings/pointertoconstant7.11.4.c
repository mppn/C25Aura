#include <stdio.h>
 int main()
 {

 int a = 10;
const int* ptr = &a; 
 *ptr = 30; 
 return 0;
 }
