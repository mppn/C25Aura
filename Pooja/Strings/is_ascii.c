int is_ascii(int c)
{
    int t;
    if((c>=0)&&(c<=255))
    {
      t=1;
    }
    else
    {
      t=0;
    }
    return t;
}
