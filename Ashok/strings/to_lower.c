char to_lower(char *s)
{

        int i,x=0 ;

          for(i=0;s[i]!='\0';i++)
          {
               if(s[i]>='A' && s[i]<='Z')
               {
                  int x=s[i]+32;
                  printf("%c",x);
               }
               else if(s[i]>='a' && s[i]<='z')
               {
                      printf("%c",s[i]);
               }


          }
 }
