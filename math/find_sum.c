#include "stdio.h"

int main(int argc, char const *argv[])
{
  printf("%s\n", "Given X, find two values that equal X");

  int S[] = {3, 1, 2, 5, 0, 7, 4};
  int n = (sizeof(S) / sizeof(int));
  int x = 5;
  int sum = 0;
  int left = 0;

  for (int i = 0; i < n; i++)
  {
      left = S[i];

      for (int j = 0; j < n; j++)
      {
          sum = left + S[j];
          if ((i != j) && (sum == x))
          {
              printf("%d + %d = %d\n", S[i], S[j], x);
          }
      }
  }

  return 0;
}
