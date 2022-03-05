int bit_and(int a, int b)
{
    int z;
    z=~(~a|~b);
    return z;
}