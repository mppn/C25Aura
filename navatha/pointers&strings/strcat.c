char *strconcat(char *x, char *y)
{
    char *z=x;
    while(*x!='\0')
    {
        x++;
    }
    while(*y!='\0')
    {
        *x=*y;
        y++;
        x++;
    }
    *x='\0';
    return z;
}