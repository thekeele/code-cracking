#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int array[], int p, int r)
{
    int x = array[r - 1];
    int i = p;
    int tmp = 0;

    for (int j = p; j < r - 1; j++) {
        if (array[j] <= x) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;

            i = i + 1;
        }
    }

    tmp = array[i];
    array[i] = array[r - 1];
    array[r - 1] = tmp;

    return i;
}

int rand_partition(int array[], int p, int r)
{
    int i = 0;
    int tmp = 0;
    srand(time(NULL));

    i = (rand() % (r - p) + p);

    tmp = array[r - 1];
    array[r - 1] = array[i];
    array[i] = tmp;

    return partition(array, p, r);
}

int rand_select(int array[], int p, int r, int i)
{
    while (p < r - 1) {
        int q = rand_partition(array, p, r);
        int k = q - p;

        if (i == k) {
            return array[q];
        } else if (i < k) {
            r = q;
        } else {
            p = q + 1;
            i = i - k - 1;
        }
    }

    return array[p];
}

int main(int argc, char const *argv[])
{
    int array[] = {0, 1, 2, 3, 4};
    int n = sizeof(array) / sizeof(int);

    printf("Random Selection: %d\n", rand_select(array, 0, n, n/2));

    return 0;
}
