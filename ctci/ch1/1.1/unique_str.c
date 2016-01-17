#include "stdio.h" // for all
#include "stdbool.h" // for bool
#include "string.h" // for strlen

/*
  compile: gcc unique_str.c -o unique_str
  run: ./unique_str fuck
    fuck is unique
  run: ./unique_str fucf
    fucf is not unique
*/

bool unique_add_ds(int str_length, char str[])
{
    bool isUnique = true;

    char unique[str_length];
    int unique_length = (sizeof(unique) / sizeof(char));

    char letter;

    for (int i = 0; i < str_length; i++) {
        letter = str[i];

        for (int j = 0; j < unique_length; j++) {
            if (letter == unique[j]) {
                isUnique = false;
            }
        }
        if (isUnique == true) {
            unique[i] = letter;
        }
    }
    return isUnique;
}

bool unique_no_ds(int str_length, char str[])
{
    bool isUnique = true;

    for (int i = 0; i < str_length; i++) {
        for (int j = 0; j < str_length; j++) {
            if ((i != j) && (str[i] == str[j])) {
                isUnique = false;
            }
        }
    }
    return isUnique;
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("%s\n", "There doesn't seem to be anything here.");
        return 0;
    }

    int result_add = unique_add_ds(strlen(argv[1]), argv[1]);

    printf("%s\n", "Using additional data structures");
    printf("%s "
           "is %s\n",
           argv[1],
           (result_add == 1) ? "unique" : "not unique");

    int result_no = unique_no_ds(strlen(argv[1]), argv[1]);

    printf("\n%s\n", "Without additional data structures");
    printf("%s "
           "is %s\n",
           argv[1],
           (result_no == 1) ? "unique" : "not unique");

    return 0;
}
