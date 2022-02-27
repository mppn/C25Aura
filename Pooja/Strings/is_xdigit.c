int is_xdigit(int c)
{
    int t;
    if((c>=48)&&(c<=57)||(c>=65)&&(c<=70)||(c>=97)&&(c<=102))
    {
      t=1;
    }
    else
    {
      t=0;
    }
    return t;
}
