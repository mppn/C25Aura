char *strnconcat(char *x, char *y,int c)
{
    int i;
    char *z=x;
    while(*x!='\0')
    {
        x++;
    }
    for(i=0;i<=c;i++)
    {
        *x=*y;
        y++;
        x++;
    }
    *x='\0';
    return z;
}