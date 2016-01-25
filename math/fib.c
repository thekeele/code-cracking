#include "stdio.h"
#include "stdlib.h" // for atoi

int fib(int n)
{
    if (n == 0) {
        return n;
    } else if (n == 1) {
        return n;
    } else {
        return (fib(n - 2) + fib(n - 1));
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2) {
        printf("Fib of %s", argv[1]);
        int n = atoi(argv[1]);
        int result = fib(n);
        printf(" -> %d\n", result);
    } else {
        printf("%s\n", "Please supply one integer");
    }

    return 0;
}
