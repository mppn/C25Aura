//the sum of x!/y! + (x+1)!/(y+1)! + ...(x+n)!/(y+n)!

#include <stdio.h>
int fact(int);
int main()
{
    int i,x=3,y=4,n=5;
    float d,s=0;
    for(i=1;i<=n;i++)
    {
        d=(float)fact(x)/fact(y);
        s=s+d;
        x++;
        y++;
    }
    
    printf("the sum of factorials of %d numbers is %f",n,s);
    printf("\n");
    return 0;
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
