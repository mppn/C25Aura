{

int i = 0;
int count = 0;
while(s[i]) 
{
   char c = s[i++];
   if (isblank(c)) {
      count++;
   }
}

