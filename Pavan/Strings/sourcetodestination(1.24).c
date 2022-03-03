{                                                                               
  char source[ SIZE ] = "This is the source string";                            
  char destination[ SIZE ] = "And this is the destination string";              
  char * return_string;                                                         
                                                                                
  printf( "destination is originally = \"%s\"\n", destination );                
  return_string = strcpy( destination, source );                                
  printf( "After strcpy, destination becomes \"%s\"\n", destination );          
}            
