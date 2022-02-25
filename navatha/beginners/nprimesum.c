#include <stdio.h>
int prime(int);
int main()
{

       int c=2,t, sum=0,i=1;
    while(i<=5)
    {
        if(prime(c)==1)
        {
            sum=sum+c;
	    printf("%d\n",c);
            i++;
        }
        c++;
    }
    printf("sum=%d\n",sum);
        return 0;
   
}
    
int prime(int n)
{
    int i, c=0;
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
    {
        c++;
    }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    
