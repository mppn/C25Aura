int alphanumeric(int c)
{
    int t;
    if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z'))||((c>='0')&&(c<='9')))
    t=1;
    else
    t=0;
    return t;
}
