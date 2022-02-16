int Strcmp(char *x,char *y)
{
   int i=0,t;
    while((x[i]!='\0')||(y[i]!='\0'))
    {
        if(x[i]==y[i])
        {
        i++;
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
