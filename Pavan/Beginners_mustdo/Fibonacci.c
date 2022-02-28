int main()
{
   int a=0, b=1, num, c, sum=0;

   printf("Enter number of terms: ");

   for(int i=0; i<num; i++)
   {
      sum += a;
      c = a + b; 
      a = b;
      b = c;
   }

   printf("Sum = %d", sum);
}
