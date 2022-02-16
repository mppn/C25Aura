int is_cntrl(int c)
{
    int t;
    if((c==0)||((c>=7)&&(c<=13))||(c==26)||(c==27))
    t=1;
    else
    t=0;
    return t;
}
