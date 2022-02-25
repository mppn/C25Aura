int Rstrcmp(char *s1, char *s2){ 
  int flag=0,i;
  while(s1[i]!='\0' && s2[i]!='\0'){
     if(s1[i]!=s2[i]){
           flag=1; 
     }
     i++;
  }
  if(flag==0)
      return 0;
  else
      return 1;
}
int main()
{
    char a1[]={"ride next"};
    char a2[]={"Ride Next"};
    t=Rstecmp(a1,a2);
    if(t==0)
        printf("strings are same")
    else
        printf("strings are not same")
