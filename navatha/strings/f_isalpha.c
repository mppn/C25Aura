int isalpha(int c)
{
    int t;
    if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
    t=1;
    else
    t=0;
    return t;
}
