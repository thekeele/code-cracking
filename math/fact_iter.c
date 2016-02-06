#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // for atoi


/* Create a program that executes a factorial function iteratively */


long long compute_factorial( long long n )
{
    long long sum = 1;
    long long x = 1;
      
    while( x <= n ) {
      sum = ( sum * x );
      /*
      printf("%s", "sum value: ");
      printf("%lld\n", sum);
      printf("%s", "x value: ");
      printf("%lld\n", x);
      */
      x += 1;
    }

    return sum;
}

int main( int argc, char *argv[] )
{
    /*
     * Take input for the coefficient of the factorial function !
    */
//    long long x = 0;

//    printf("What number do you want to factorialize, you sick fuck? ");
//    fscanf(stdin, "%lld", &x);

//    printf("%s\n", "Ok, then, running factorial operation...");
//    printf( "Factorial of %lld is -> %lld\n", x, compute_factorial(x)); 

  if (argc == 2) {
    printf("fact of %s", argv[1]);
    long long n = atoi(argv[1]);
    long long result = compute_factorial(n);
    printf(" -> %lld\n", result);
  }
  else {
    printf("%s\n", "Please supply one integer");
  }
}
