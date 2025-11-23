#include <stdio.h>

int main() {
  printf("Please input 2 numbers:\n");
  fflush(stdout);

  int num1, num2;

  if (scanf("%d %d", &num1, &num2) != 2) {
    fprintf(stderr, "Input is invalid\n");
    return 1;
  }

  printf("The sum of the two inputs you gave me equates to %d", num1 + num2);

  return 0;
}
