int oddbits(int n)
{
  int i,c,d=n,mask;
   while(n>0)
  {
    mask=1;
    c=n&mask;
    n=n>>2;
    c=c&c;
    if(c==0)
    {
        break;
        return 0;
    }
    else
        return d;
    }
    
}
