int bit_and(int x, int y)
{
    int z;
    z=~(~x&~y);
    return z;
}
