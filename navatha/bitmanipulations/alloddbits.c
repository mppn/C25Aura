int all_odd_bits(int n)
{
  int i,c,d,mask;
   while(n>0)
  {
    mask=1;
    c=n&mask;
    n=n>>2;
    c=c&c;
    if(c==0)
    break;
    }
    return c;
}
