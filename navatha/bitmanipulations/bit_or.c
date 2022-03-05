int bit_or(int a, int b)
{
    int z;
    z=~(~a&~b);
    return z;
}