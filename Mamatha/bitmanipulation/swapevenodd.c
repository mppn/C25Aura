int swapevenoddbits(int n)
{
  int n= 25;
   int even= 25&0xAA;
     int odd=25&0x55;
 even_bits >>= 1;  
    odd_bits <<= 1;
    return (even_bits | odd_bits); 
}
int main()
{
     int n = 25;
    printf("%u ", swapevenoddbits(n));
 
    return 0;
