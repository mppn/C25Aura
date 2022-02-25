char str_casecmp(char *s1,char *s2)
{
        int x;
        int i;
        for(i=0;s1[i]!='\0' ||  s2[i]!='\0';i++)
        {
                printf("\n %d\n",i);
                if(s1[i]==s2[i])
                {

                  x=1;
                }
                else if(s1[i]+32==s2[i])
               {
               x=1;
               }
                 else if(s1[i]-32==s2[i])
               {
               x=1;
               }

                else
                {
                        return 0;
                break;
                }
        }
        return x;
}
