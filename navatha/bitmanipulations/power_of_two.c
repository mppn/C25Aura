int power_of_two(int n)
{
    int count=0;
    while(n)
    {
        count=count+(n&1);
        n>>=1;
    }
    if(count==1)
            return 1;
    else
            return 0;
}