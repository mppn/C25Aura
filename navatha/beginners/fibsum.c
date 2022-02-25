#include <stdio.h>

int main()
{
    int i,n=5,f,s1=0,s2=1,s=1;
    printf("%d\n%d\n",s1,s2);
    for(i=2;i<n;i++)
    {
        f=(s1+s2);
        s=s+f;
        s1=s2;
        s2=f;
        printf("%d\n",f);
    }
    
        printf("sum of fibonacci series :%d\n",s);
    return 0;
}
