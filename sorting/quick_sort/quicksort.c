#include <stdio.h>

void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int partition(int array[], int p, int r)
{
    int x = array[r];
    int i = p - 1;
    int tmp = 0;

    for (int j = p; j < r; j++) {
        if (array[j] <= x) {
            i = i + 1;

            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }

    tmp = array[i + 1];
    array[i + 1] = array[r];
    array[r] = tmp;

    return (i + 1);
}

void quicksort(int array[], int p, int r)
{
    int q = 0;

    if (p < r) {
        q = partition(array, p, r);
        quicksort(array, p, q - 1);
        quicksort(array, q + 1, r);
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {3, 1, 2, 5, 4};
    int n = sizeof(array) / sizeof(int);

    printf("%s", "Pre-sort: ");
    print_array(array, n);

    quicksort(array, 0, n - 1);

    printf("\n%s", "Post-sort: ");
    print_array(array, n);

    return 0;
}
