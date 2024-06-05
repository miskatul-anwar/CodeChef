#include <stdio.h>

int main(void) {
  // your code goes here
  int t, a, b;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &a, &b);
    if (b == 0) {
      printf("%d\n", b);
    } else {
      printf("%d\n", (a / 10) * b);
    }
  }
  return 0;
}
