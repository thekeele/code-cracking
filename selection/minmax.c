#include <stdio.h>

int minimum(int array[], int n)
{
    int min = array[0];

    for (int i = 1; i < n; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }

    return min;
}

int maximum(int array[], int n)
{
    int max = array[0];

    for (int i = 1; i < n; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    return max;
}

int main(int argc, char const *argv[])
{
    int array[] = {10, 25, 4, 7, 100};
    int n = sizeof(array) / sizeof(int);

    printf("Min: %d\n", minimum(array, n));
    printf("Max: %d\n", maximum(array, n));

    return 0;
}
