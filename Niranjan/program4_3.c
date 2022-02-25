n=4, t=0
for(i=0; i<=n; i++)
{
   for(j=(i+1); j<=n; j++) 
   {
      if(a[i] > a[j]) 
      {
        t = arr[i];
        a[i] = a[j];
        a[j] = t;
      }
   }
}
