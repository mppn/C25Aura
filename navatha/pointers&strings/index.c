char *Index(char *x, int ch)
{
  while(1)
    {
        if(*x==(char)ch)
        {
            break;
        }
        x++;
  }
    return x;
}
