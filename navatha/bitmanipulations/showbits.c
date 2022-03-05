int showbits (int n)
{
  int i, c, mask;
 
  for (i=16; i>=0;i--)
  {
    mask=1<<i;
    
    c=n&mask;
    if(c==0)
        printf ("0");
    else
         printf ("1");
  }
}