#include <stdio.h>

void InsertionSort (int a[], int n)
{
    int cur, prev;

    // Σ from i = 1 to n
    // Ti = # of times the while loop is executed for a given i
                                                    // Execution   | Cost
    for(int i = 1; i < n; i++) {                    // n           | c1
        cur = a[i];                                 // n - 1       | c2
        prev = i - 1;                               // n - 1       | c4

        while ((a[prev] > cur) && (prev >= 0)) {    // Σ Ti        | c5
            a[prev + 1] = a[prev];                  // Σ (Ti - 1)  | c6
            prev = prev - 1;                        // Σ (Ti - 1)  | c7
        }
        a[prev + 1] = cur;                          // n - 1       | c8
    }
    /*
      Running Time
      T(n) = c1 n + c2 (n - 1) + c4 (n - 1) +
             c5 Σ(Ti) + c6 Σ(Ti - 1) + c7 Σ(Ti - 1) +
             c8 (n - 1)

      Best Case: array is sorted
      T(n) = a n + b = O(n) - linear time

      Worse Case: sorted in reverse order
      T(n) = a n^2 + b n + c = O(n^2) - quadratic time

      Average Case: must search half of array
      same as worse case but cost(constants) will change
    */
}

int main (int argc, char *argv[]) {

    printf("%s\n", "In-Place Insertion Sort");

    int a[] = {5, 2, 4, 6, 1, 3};
    int n = (sizeof(a) / sizeof(int)); // sizeof returns # of bytes / by type to get count

    printf("%s", "Pre Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    InsertionSort(a, n);

    printf("\n%s", "Post Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
