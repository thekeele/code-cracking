#include <stdio.h>

void Merge(int a[], int low, int mid, int high)
{
    int temp[50];    // array used for merging
    int i, j, k;

    i = low;        // start of left side
    j = mid + 1;    // start of right side
    k = 0;

    while ((i <= mid) && (j <= high))
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    // copy remaining elements of left side
    while(i <= mid)
        temp[k++] = a[i++];

    // copy remaining elements of right side
    while(j <= high)
        temp[k++] = a[j++];

    // transfer elements from temp back to a
    for(i = low, j = 0; i <= high; i++, j++)
        a[i] = temp[j];
}

void MergeSort(int a[], int low, int high)
{
    // Divide and Conquer Algorithm
    // running time: O(n log2 n)

    if (low < high) {
        int mid = ((high + low) / 2);  // divide  - O(1)
        MergeSort(a, low, mid);        // conquer - 2 T(n/2)
        MergeSort(a, mid + 1, high);   // conquer - 2 T(n/2)
        Merge(a, low, mid, high);      // combine - O(n)
    }
}

int main (int argc, char *argv[])
{
    printf("%s\n", "Merge Sort");

    int a[] = {5, 2, 4, 6, 1, 3};
    int n = (sizeof(a) / sizeof(int)); // sizeof returns # of bytes / by type to get count

    printf("%s", "Pre Sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    MergeSort(a, 0, n - 1);

    printf("\n%s", "Post Sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
