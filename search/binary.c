#include <stdio.h>
#include <stdlib.h> // for atoi

int binary_search(int A[], int key, int min, int max)
{
    while (min <= max) {
        int mid = ((max + min) / 2);

        if (A[mid] == key) {
            return mid;
        } else if (A[mid] < key) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    printf("%s\n", "Binary Search");

    if (argc == 2) {
        int A[] = {1, 2, 3, 4, 5, 6};
        int max = (sizeof(A) / sizeof(int));
        int key = atoi(argv[1]);
        int min = 0;
        int result = 0;

        printf("%s", "Searching:" );
        for (int i = 0; i < max; i++) {
            printf(" %d", A[i]);
        }
        printf(" for key: %d\n", key);

        result = binary_search(A, key, min, max);
        printf("Key is at index: %d\n", result);
    } else {
        printf("%s\n", "Please supply one integer as the key");
    }

    return 0;
}
