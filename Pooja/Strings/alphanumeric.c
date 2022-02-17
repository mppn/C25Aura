int isalpha(char c)
{
  int t;
  if((c>='o' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z'))
  {
    t=1;
  }
  else
  {
    t=0;
  }
  return t;
}
