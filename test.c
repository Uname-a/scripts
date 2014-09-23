  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include "scanner.h"
  #include <string.h>
  
int   main(int argc,char **argv)
{
    
//    char **a = malloc(sizeof(char) * argc);

   double c[4]; int i = 0; 
    while(i < sizeof(argc))
        {
    //*a = *argv; 
    printf("%s\n",*argv[i]);
    i++;
   } 
    return 0;
}
