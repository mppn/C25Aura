sum=o, x=2
for(i=0; i<(r-1); i++)
{
   for(j=0; j<=(c-1); j++)
   {
     for(k=0; k<=x; k++)
     {
       sum+ = a[i][k] * a[k][j];
     }
     p[i][j] = sum;
     sum=0;
   }
}
