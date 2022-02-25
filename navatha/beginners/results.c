#include <stdio.h>

int main()
{
    int s1=75,s2=85,s3=56,c=0;
    if(s1>=35) c++;
    if(s2>=35) c++;
    if(s3>=35) c++;
    if(c==3)
    {
        printf("promoted");
    }
    else
    {
        printf("notpromoted");
    }
    printf("\n");
    return 0;
}
