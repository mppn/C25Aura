char *Index(char *x, int ch)
{
   char *i=0;
    while(1)
    {
        if(*x==(char)ch)
        {
            break;
        }
        x++;
        i++;
    }
    return i;
}