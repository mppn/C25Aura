for(i=0;i<=n-2;i++)
{
   for(j=i+1;j<=n-1;j++)
   {
     if(a[i]==a[j])
     {
        for(k=j;k<=n-1;k++)
        {
           a[k]=a[k+1];
         }
         j--;
         n--;
     }
}
