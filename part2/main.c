#include <stdio.h>

int main() {
  printf("What is your name?\n");
  char buf[16]; // to store the string
  // a single char contains 1 bit
  // so the above is 16 chars (including the end character)

  scanf("%s", buf); // do not use this in production - not safe - %s means inputting a string

  printf("Hello, %s", buf);

  return 0;
}
