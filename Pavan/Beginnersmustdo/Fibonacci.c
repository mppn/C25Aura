#include <stdio.h>
 
int main() 
{
 
   int i, n, first = 0, second = 1, sum = 1, third;
 
   printf (" Enter the range \n");
   scanf( "%d", &n);
 
   for(i = 2; i < n; i++)
   {
 
    
 
     third = first + second;
 
     sum = sum + third;
 
     first = second;
     second = third;
 
   }
 
   printf("Sum of Fibonacci series for given range is %d", sum);
 
   return 0;
}
