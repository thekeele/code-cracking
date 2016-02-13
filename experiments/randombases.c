#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {


  srand ( time(NULL) ); //Seed for generating random integers

  int randnum = 0;
  int runtimes = 0;
  int percent_A = 25;
  int percent_T = 25;
  int percent_C = 25;
  int percent_G = 25;

  int randX = 0;

  char *random_bases; // Could I shove all of the randomly generated chars into one long char pointer, then print?

  char randchar = ( rand() % 26) + 1;

  // Set of possible bases 
  const int N = 4;
  char set[N] = {'A', 'T', 'C', 'G'};

/*
  randnum = rand();
  //randchar = (randnum % 26) + 1;
  //randchar = randchar + 97;
  //letter = (char) randchar;

  int percent_A = 25;
  int percent_T = 25;
  int percent_C = 25;
  int percent_G = 25;

  randX = ( rand() % 100 )
  
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

  //Take input from the user: 
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

  int A_min = 0;
  int A_max = percent_A;
  int T_min = A_max + 1;
  int T_max = A_max + percent_T;
  int C_min = T_max + 1;
  int C_max = T_max + percent_C;
  int G_min = C_max + 1;
  int G_max = C_max + percent_G;

  for( int i = runtimes; 0 < i; i--) {
  
    //random_bases = set[rand()%N]; // rand()%N is within bounds of array
  
    //printf("%c", set[rand()%N]);

    randX = ( rand() % 100 );

    /*
      //Cannot use switch statement because "randX" must be const int ????  
      switch( randX ) {

        case( randX >= A_min && randX < A_max ):
          randchar = 'A';
          break;

        case( randX >= T_min && randX < T_max ):
          randchar = 'T';
          break;

        case( randX >= C_min && randX < C_max ):
          randchar = 'C';
          break;

        case( randX >= G_min && randX < G_max ):
          randchar = 'G';
          break;
        }
      */

    //Next try... if statements...
    if (randX >= A_min && randX < A_max) {
      randchar = 'A';
    }
    else if (randX >= T_min && randX < T_max) {
      randchar = 'T';
    }
    else if (randX >= C_min && randX < C_max) {
      randchar = 'C';
    }
    else if (randX >= G_min && randX < G_max) {
      randchar = 'G';
    }


    printf("%c", randchar);
  }

  printf("\n");
  //printf("%s\n", random_bases);

  return 0;

}
