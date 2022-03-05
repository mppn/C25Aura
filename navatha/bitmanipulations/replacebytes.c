int replacebyte(int l,int m, int c)
{
  while(l>0)
  {
      int z, mask;
     mask=m<<1;
    if(c==0)
    {
        z=(l^mask);
     }
    else
    {
        z=l|mask;
    }
    return z;
  }
    
}