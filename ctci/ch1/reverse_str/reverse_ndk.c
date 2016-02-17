#include <stdio.h>

// To execute C, please define "int main()"



void inplace_reverse ( /* char str[] */ ) {

  //temporary strorage var
  char tmp = 'X'; 

  char str[] = "CODE";

  printf("Value of 'str':%s\n\n", str);
  //printf("Value of '&str':%s\n\n", &str);

  int n = ( sizeof(str) / sizeof(char) - 1);
  //n = ( n / 2 );

  printf("n: %d\n\n", n);

/*  interate through string with int point "i"
  //printf("The is final 'end': %s\n\n", end);
  for( int i = 0; i < n; i++ ) {
    printf("tmp: %c\n", tmp);
    printf("str[i]: %s\n\n", str);
    printf("str[(n-i)]: %c\n\n", str[(n-i)]);
    tmp = str[(n-1)-i]; //backup the char that will be replaced
    str[(n-1)-i] = str[i];
  }

*/

  for( char *i = str; *i; i++ ) {

    printf("Traverse loop content: %c\n", *i);
    //tmp = str[(n-1)-i]; //backup the char that will be replaced
    tmp = *i;
    *str = str[(n-1)];
    //str[n-1] = *i;
    
  }



/*
  while( str < end ) {
    tmp = *str;
    *str++ = *end;
    *end-- = tmp;
  }
  */

  printf("String after reversal: %s\n", str);


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

  char str[] = { 'C', 'O', 'D', 'E' };

  inplace_reverse(/* str */ );

  //printf("String after reversal: %s\n", str);

  return 0;
}