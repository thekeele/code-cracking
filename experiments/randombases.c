#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
  srand ( time(NULL) ); //Seed for generating random integers

  int runtimes = 8;
  int percent_A = 25;
  int percent_T = 25;
  int percent_C = 25;
  int percent_G = 25;
  int randX = 0;

  // Set of possible bases
  const int N = 4;
  char set[N] = {'A', 'T', 'C', 'G'};

  // Could I shove all of the randomly generated chars into one long char pointer, then print?
  // you would have to know the number of chars you will generate and use that when you
  // declare the variable, probably better to write to a file
  // char *random_bases;
  char random_bases[runtimes];

  // rand() returns an int, initialize logic is bad
  // char randchar = ( rand() % 26) + 1;
  char randchar;


  // Ask for runtimes first, as each percent will be based on runtimes
  // runtimes = 8, percent_A = 25% -> runtimes * percent_A(.25) = 2
  // so the range for 2 would be 0 - 1

  // printf("How many times??? ");
  // fscanf(stdin, "%d", &runtimes);

  // printf("Please input percentage of A: ");
  // fscanf(stdin, "%d", &percent_A);

  // printf("Please input percentage of T: ");
  // fscanf(stdin, "%d", &percent_T);

  // printf("Please input percentage of C: ");
  // fscanf(stdin, "%d", &percent_C);

  // printf("Please input percentage of G: ");
  // fscanf(stdin, "%d", &percent_G);

  // calculate max based on above math
  int A_min = 0;
  int A_max = 1;
  int T_min = A_max + 1;
  int T_max = 3;
  int C_min = T_max + 1;
  int C_max = 5;
  int G_min = C_max + 1;
  int G_max = 7;

  for( int i = 0; i < runtimes; i++) {

    randX = ( rand() % runtimes );  // range: 0 to runtimes -> 0 to 7

    if (randX >= A_min && randX <= A_max) {
      randchar = set[0];
    }
    else if (randX >= T_min && randX <= T_max) {
      randchar = set[1];
    }
    else if (randX >= C_min && randX <= C_max) {
      randchar = set[2];
    }
    else if (randX >= G_min && randX <= G_max) {
      randchar = set[3];
    } else {
      // incase rand() fucks up
      break;
    }
    printf("int: %d -> generates: %c\n", randX, randchar);

    random_bases[i] = randchar;
  }

  printf("\nAnd the bases are: ");
  for (int i = 0; i < runtimes; i++) {
    printf("%c ", random_bases[i]);
  }

  printf("\n");
  return 0;
}
