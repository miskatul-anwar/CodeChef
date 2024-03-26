#include <stdio.h>

int main(void) {
  int t, res;
  scanf("%d", &t);

  while (t--) {
    int x;
    scanf("%d", &x);
    res = x * 2 * 5;
    printf("%d\n", res);
  }
  return 0;
}
