int get_bit_count(int n)
{
    int count=0;
    while(n)
    {
        count=count+(n&1);
        n>>=1;
    }
    return count;
}
