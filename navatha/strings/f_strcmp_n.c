int Strcmp(char *x,char *y)
{
   int i,t,n=4;
   for(i=0;i<=n;i++)
    {
        if(x[i]==y[i])
        {
                t=1;
        }
        
        else
        {
        break;
        t=0;
        }
    }
    return t;
}
