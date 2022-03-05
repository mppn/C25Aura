int bit_Xor(int a, int b)
{
    int z;
    z=~(~(a&(~b))&(~((~a)&b)));
    return z;
}