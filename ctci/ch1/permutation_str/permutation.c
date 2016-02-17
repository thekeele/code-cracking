#include <stdio.h>

int permutation_str(char str1[], char str2[], int n1, int n2)
{
    int perm[n1];

    if (n1 != n2) {
        printf("%s\n", "String lengths not equal, cannot be a permutation");
        return 0;
    }

    // we need to assume that our strings are not a permutation
    for (int i = 0; i < n1; i++) {
        perm[i] = 0;
    }

    // for each char in str1 we will see if it's in str2
    // if it's then we'll add a 1 to the perm array
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (str1[i] == str2[j]) {
                perm[i] = 1;
            }
        }
    }

    // string is not a permutation
    for (int i = 0; i < n1; i++) {
        if (perm[i] == 0) {
            return 0;
        }
    }

    // string is a permutation
    return 1;
}

int main(int argc, char const *argv[])
{
    char str1[] = "mark";
    char str2[] = "mrak";

    int n1 = sizeof(str1) / sizeof(char);
    int n2 = sizeof(str2) / sizeof(char);

    printf("str1: %s size: %d\n", str1, n1);
    printf("str2: %s size: %d\n", str2, n2);

    int result = permutation_str(str1, str2, n1, n2);

    if (result == 1) {
        printf("%s\n", "Permutation");
    } else {
        printf("%s\n", "Not Permutation");
    }

    return 0;
}
