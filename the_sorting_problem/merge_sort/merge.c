#include <stdio.h>

int main (int argc, char *argv[]) {

    printf("%s\n", "Merge Sort");

    int a[] = {5, 2, 4, 6, 1, 3};
    int n = (sizeof(a) / sizeof(int)); // sizeof returns # of bytes / by type to get count

    printf("%s", "Pre Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    /*
      place your algo here
     */

    printf("\n%s", "Post Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
