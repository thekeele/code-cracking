#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

  int randnum, randchar = 0;
  int runtimes = 0;
  int percent_A = 0;
  int percent_T = 0;
  int percent_C = 0;
  int percent_G = 0;

  char letter;


  randnum = rand();
  randchar = (randnum % 26) + 1;
  randchar = randchar + 97;
  //letter = (char) randchar;


  /*
    int percent_A = 25;
    int percent_T = 25;
    int percent_C = 25;
    int percent_G = 25;

    randX = = ( rand() % 100 )

    switch( randX ) {
    
      case( randX >= A0 && randX < A1 ):

      break;

      case( randX >= T0 && randX < T1 ):

      break;

      case( randX >= C0 && randX < C1 ):

      break;

      case( randX >= G0 && randX < G1 ):

      break;
    }

    */

  const int N = 4;
  char set[N] = {'A', 'T', 'C', 'G'};

  printf("Please input percentage of A: ");
  fscanf(stdin, "%d", &percent_A);

  printf("Please input percentage of T: ");
  fscanf(stdin, "%d", &percent_T);
  
  printf("Please input percentage of C: ");
  fscanf(stdin, "%d", &percent_C);
  
  printf("Please input percentage of G: ");
  fscanf(stdin, "%d", &percent_G);
  
  printf("How many times??? ");
  fscanf(stdin, "%d", &runtimes);

  for( int i = runtimes; 0 < i; i--) {
  
    letter = set[rand()%N]; // rand()%N is within bounds of array
  
    printf("%s", "Letter: ");
    printf("%c\n", letter);
  }

  printf("hello world\n");
    return 0;

}
