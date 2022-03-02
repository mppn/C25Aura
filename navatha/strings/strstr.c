int strstring(char x[], char y[]) 
{
   int i,j,index;
   i=0,j=0;
    while(x[i]!='\0')
   {
       while(x[i]!=y[0]&&x[i]!='\0')
         i++;
       if(x[i]=='\0')
         return 1;
       index=i;
       while(x[i]==y[j]&&x[i]!='\0'&&y[j]!='\0') 
      {
         i++;
         j++;
      }
       if(y[j]=='\0')
         return (index);
      if(x[i]=='\0')
         return 1;
   }
}
