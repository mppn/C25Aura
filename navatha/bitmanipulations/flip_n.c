int flip_n(int x, int y)
{
    int fnum,mask;
    mask=1<<y;
    fnum= x ^ mask;
    return fnum;
}
    