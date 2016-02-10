#include <stdio.h>

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
    char str[] = "nathan_needs_sleep";
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
    printf("original: %s\n", str);
    char *end = str;
    char tmp;

    while (*end) {
        end++;
    }
    end--;

    while (str <= end) {
        tmp = *str;
        printf("tmp: %c\n", tmp);
        *str = *end;
        printf("str: %c\n", *str);
        *end = tmp;
        printf("end: %c\n", *end);

        str++;
        end--;
    }
    printf("reverse: %s\n", end);
}

int main(int argc, char const *argv[])
{
    char str[] = "ctci_sucks";

    printf("%s\n", "Array String Reverse");
    array_reverse();

    printf("\n%s\n", "Pointer String Reverse");
    ptr_reverse(str);

    return 0;
}
