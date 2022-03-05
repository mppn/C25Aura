int bit_pal(int n)
{
    int y=0;
    int x=n;
    while (n>0)
    {
        y<<=1;
        if (n&1==1)
       	 y^=1;
       	 n>>=1;
     }
       if(x==y)
      	 return 1;
       else
       	return 0;
}