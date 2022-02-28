{
   int num[20];
   int i, j, a, n;
   
   printf("Enter the elements\n");
   
 for (i = 0; i < n; i++)  //inner loop
 {
      for (j = i + 1; j < n;j++) //condition loop
      {
         if (num[i] > num[j])  //if condition 
         {
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   
// logic to print the acending order

{
   for (i = 0; i < n; ++i){
      printf("%d\n", num[i]);
   }
