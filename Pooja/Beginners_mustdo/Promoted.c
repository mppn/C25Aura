#include<stdio.h>

int main() 
{
    int s1=40,s2=50,s3=70;
    if(s1>=35)
    {
        if(s2>=35)
        {
            if(s3>=35)
            {
                printf("Promoted");
            }
        }
    }
    else
    {
        printf("Not promoted");
    }
    
    
}
