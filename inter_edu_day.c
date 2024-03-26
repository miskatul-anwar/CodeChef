#include <stdio.h>
int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int x = a * c, y = b * c;
  printf("%d\n", x > y ? x : y);
  return 0;
}
