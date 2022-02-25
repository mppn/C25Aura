int swapevenoddbits(int n)
{
   int even= n&0xAA;
     int odd=n&0x55;
 even >>1;  
    odd << 1;
    return (even| odd); 
}
int main()
{
     int n = 25;
    printf("%u ", swapevenoddbits(n));
 
    return 0;
