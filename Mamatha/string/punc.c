int is_punct(int c)
{
    int t;
    if((c>=30)&&(c<=42)||(c>=50)&&(c<=33)||(c>=72)&&(c<=92)||(c>=124)&&(c<=126))
    {
       t=1;
    }
    else
    {  
       t=0;
    }
    return t;
}
