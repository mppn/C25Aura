#include <stdio.h>

int main()
{
    int s1=75,s2=25,s3=56,i=0;
    if(s1>=35) 
    i++;
    if(s2>=35) 
    i++;
    if(s3>=35)
    i++;
    if(i==3)
    {
        printf("promoted");
    }
    else
    {
        printf("not promoted");
    }
    printf("\n");
    return 0;
}
