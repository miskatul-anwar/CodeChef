#include <stdio.h>
int main(void) {
  int t, X;
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &X);
    if (X <= 10) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}

