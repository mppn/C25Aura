int is_punct(int c)
{
    int t;
    if((c>=33)&&(c<=47)||(c>=58)&&(c<=64)||(c>=91)&&(c<=96)||(c>=123)&&(c<=127))
    {
       t=1;
    }
    else
    {  
       t=0;
    }
    return t;
}
