{                                                                               
  char buffer[SIZE] = "computer program";                                      
  char * ptr;                                                                   
  int    ch = 'p';                                                              
                                                                                
  ptr = strchr( buffer, ch );                                                  
  printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer, ptr );                                                 
                                                                                
}                        
