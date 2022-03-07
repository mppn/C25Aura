char *strcopy(char *x, char *y)
{
    char *z=y;
    while(*x!='\0')
    {
       *y=*x;
        x++;
        y++;   
    }
        *y='\0';
    return (z);
}