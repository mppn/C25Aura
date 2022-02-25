int alnum(int c)
{
    if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z'))||((c>='0')&&(c<='9')))
         return TRUE;
    else
         return FALSE;
}
