#include <stdio.h>
#include <stdbool.h>


/* Create a program that executes a factorial function iteratively */


int compute_factorial( int argc ) {

  int sum = 1;
  int n = 1; 
  int x = 1;

  /*
    printf("%s\n", "initial value of n: ");
    printf("%d\n", n);
    printf("%s\n", "initial value of x: ");
    printf("%d\n", x);
  */
  
   while( x <= argc ) {
     sum = ( sum * x ); 
    /*
      printf("%s", "sum value: ");
      printf("%d\n", sum);
      printf("%s", "x value: ");
      printf("%d\n", x);
    */
    x = (x + 1);
  }

  return sum;

}



int main( int argc, char *argv[] ) {

  /* 
   * Take input for the coefficient of the factorial function !
  */

  int x = 0;

  printf("What number do you want to factorialize, you sick fuck? ");
  fscanf(stdin, "%d", &x);

  printf("%s\n", "Ok, then, running factorial operation...");
  printf( "%d\n", compute_factorial(x));
}
