                                                              
{                                                                               
  char buffer[SIZE] = "computer program";                                          
  char * ptr;                                                                   
  int    ch = 'p';                                                              
                                                                                                                                
  ptr = strchr( buf, ch );                                                      
  printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );     //first occurence  
                                                                                                                               
  ptr = strrchr( buf, ch );    //last occurence                                                 
  printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );        
}                                                                               
                
