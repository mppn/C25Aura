int ispunct(int c)
{
    if((c>=33)&&(c<=47)||(c>=58)&&(c<=64)||(c>=91)&&(c<=96)||(c>=123)&&(c<=127))
        return 1;
    else
        return 0;
}
