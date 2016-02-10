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
    printf("str: %s\n", str);
    printf("*str: %c\n", *str);

    char *end = str;
    char tmp;

    while (*end != '\0') {
        end++;
    }
    end--;

    printf("%s\n", "Found end of string");
    printf("end: %s\n", end);
    printf("*end: %c\n", *end);

    printf("%s\n", "Starting while loop with swapping");
    while (str <= end) {
        tmp = *str;
        printf("tmp: %c\n", tmp);

        *str = *end;
        printf("*str: %c\n", *str);

        *end = tmp;
        printf("*end: %c\n", *end);

        str++;
        printf("str: %s\n", str);

        end--;
        printf("end: %s\n", end);
        printf("%s\n\n", "space");
    }

    str++;
    end--;

    printf("%s\n", "Results");
    printf("str: %s\n", str);
    printf("*str: %c\n", *str);

    printf("end: %s\n", end);
    printf("*end: %c\n", *end);
}

int main(int argc, char const *argv[])
{
    printf("%s\n", "Array String Reverse");
    array_reverse();

    // char *str = "fuck" is a Read-Only string
    // therefore seg faults happen on write
    char str[] = "fuckboy_swag";
    printf("\n%s\n", "Pointer String Reverse");
    ptr_reverse(str);

    return 0;
}
