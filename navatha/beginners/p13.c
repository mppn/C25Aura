#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    for(i=n;i>=1;i--)
    {
        if(i%2==1) k=1;
        else k=i;
        for(j=1;j<=i;j++)
    {
    printf("%d",k);   
    if(i%2==1) k++;
        else k--;
    }
     printf("\n");
    }
        return 0;
}

