int is_blank(int c)
{
    int t;
    if((c==9)||(c==11)||(c==32))
    {
      t=1;
    }
    else
    {
      t=0;
    }
    return t;
}
