#include <stdio.h>
#include <string.h>

/*
  Reverse C-style str, aka a str that ends with a null character

  Using a char array makes this problem trivial
  - calculate size of size and subtract 1 for null character
  - we'll be swapping chars so our algorithm will end up doing n/2 swaps to reverse the str
  - store the first char in a tmp var
  - place the last char into the first element of the array
  - place the tmp char into the last element of the array
  - by incrementing i in the beginning and subtracting i from the end, we'll always swap the correct chars
 */

void array_reverse()
{
  char A[] = "Yeah, Wow"; 
  
  int n = ( sizeof(A) / sizeof(char) ) - 1;

  char B[n];
  
  
  for ( int i = 0; i < n; i++ ) {

    B[i] = A[(n-1)-i];
  }
  
  B[n] = '\0';

  printf("original: %s - size: %d\n", A, n);
  printf("reverse: %s - size: %d\n", B, n);
}

void inplace_reverse()
{
    char str[] = "fuckboy_swag";
    int n = ((sizeof(str) / sizeof(char)) - 1);
    char tmp;

    printf("original: %s - size: %d\n", str, n);

    for (int i = 0; i < n/2; i++) {
        tmp = str[i];
        str[i] = str[(n - 1) - i];
        str[(n - 1) - i] = tmp;
    }

    printf("reverse: %s - size: %d\n", str, n);
}

void ptr_reverse(char *str)
{
  /*
    //DEBUG PRINT BLOCK
    printf("str: %s\n", str);
    printf("*str: %c\n", *str);
  */


    char *end = str;
    char tmp;

    while (*end != '\0') {
        ++end;
    }
    --end;

    /*
      //DEBUG PRINT BLOCK 
      printf("%s\n", "Found end of string");
      printf("end: %s\n", end);
      printf("*end: %c\n", *end);
    */

    //DEBUG PRINT
    //printf("%s\n", "Starting while loop with swapping");

    while (str <= end) {
        tmp = *str;
        //DEBUG PRINT
        //printf("tmp: %c\n", tmp);

        *str = *end;
        //DEBUG PRINT
        //printf("*str: %c\n", *str);

        *end = tmp;
        //DEBUG PRINT
        //printf("*end: %c\n", *end);

        str++;
        //DEBUG PRINT
        //printf("str: %s\n", str);

        end--;
        //DEBUG PRINT
        //printf("end: %s\n", end);
        //printf("%s\n\n", "space");
    }

    /*

      //DEBUG PRINT BLOCK
      printf("%s\n", "Results");
      printf("str: %s\n", str);
      printf("*str: %c\n", *str);

      printf("end: %s\n", end);
      printf("*end: %c\n", *end);

    */
}

int main(int argc, char const *argv[])
{
//    printf("%s\n", "Array String Reverse");
//    array_reverse();

//    printf("%s\n", "Inplace String Reverse");
//    inplace_reverse();
    // char *str = "fuck" is a Read-Only string
    // therefore Bus Error happens on write
    //char str[] = "fuck";
    char str[] = "CODE";
    //DEBUG PRINT
    //printf("\n%s\n", "Pointer String Reverse");

    //PRINT OUT THE STRING **BEFORE** IT HAS BEEN REVERSED!
    printf("String **before** reverse: %s\n", str);

    //REVERSE THE STRING HERE....
    ptr_reverse(str);

    //PRINT OUT THE STRING AFTER IT HAS BEEN REVERSED!!!!
    printf("String after reverse: %s\n", str);

    return 0;
}
