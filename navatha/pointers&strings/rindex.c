char *rIndex(char *x, int ch)
{
  char *y=x;
    while(*x!='\0')
    {
        if(*x==(char)ch)
        {
            y=x;
        }
        x++;
    }
    return y;
}
