#include <stdio.h>

// To execute C, please define "int main()"



void inplace_reverse ( char *str ) {

  char *end = str;
  //temporary strorage var
  char box; 

  int n = ( sizeof(A) / sizeof(char) ) - 1 ;
  n = ( n / 2 );


  //Get the end of the input string
  for( char *i = str; *i; i++ ) {
    ++end;
    printf("The is 'end': %s\n", end);
  }
  //Move your index back once, to avoid the EOS character
  --end;

  printf("The is final 'end': %s\n", end);

  for( int i = 0; i <= n; i++ ) {

    
  }

}

int main( void ) {
/*
  //ORIGINAL GUESS ANSWER
  
  char A[] = "CODE"; 
  
  int n = ( sizeof(A) / sizeof(char) ) - 1;

  char B[n];
  
  printf("%s", A );
  
  for ( int i = 0; i <= n; i++ ) {

    B[i] = A[n-i];
    
    printf("%c\n", B[i]);

  }
  
  printf("This is a string: %s\n", B );
  
*/

  char str[] = "CODE";

  inplace_reverse(str);

  return 0;
}