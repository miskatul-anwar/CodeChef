#include <stdio.h>

int main(void) {
  // your code goes here
  int t, a, b;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &a, &b);
    (a > b) ? printf("%d\n", b) : printf("%d\n", a);
  }
  return 0;
}
