#include <stdio.h>
#include <stdlib.h> // for atoi

/*
  max accurate value, n = 20
    2432902008176640000
    2 quintillion 432 quadrillion 902 trillion 8 billion 176 million 640 thousand

  long long max value
    9223372036854775807
    9 quintillion 223 quadrillion 372 trillion 36 billion 854 million 775 thousand 807 hundred

  average time
    real  0m0.006s
    user  0m0.002s
    sys   0m0.003s
*/

long long fact(long long n)
{
    if (n == 0)
        return 1;

    return (n * fact(n - 1));
}

int main(int argc, char *argv[])
{
    if (argc == 2) {
        printf("fact of %s", argv[1]);
        long long n = atoi(argv[1]);
        long long result = fact(n);
        printf(" -> %lld\n", result);
    } else {
        printf("%s\n", "Please supply one integer");
    }

    return 0;
}
