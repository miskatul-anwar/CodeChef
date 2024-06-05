#include <stdio.h>

int main(void) {
  // your code goes here
  int x;
  scanf("%d", &x);
  if (x == 404) {
    printf("NOT FOUND\n");
  } else {
    printf("FOUND\n");
  }
  return 0;
}
