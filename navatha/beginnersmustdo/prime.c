#include <stdio.h>
int main()
{

    int i, c=0,n=15;
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
    {
        c++;
    }
    }
    if(c==0)
    {
        printf(" prime %d \n",n);
        
    }
    else
    {
        printf("not prime %d \n",n);
        
    }
    return 0;
}
    
