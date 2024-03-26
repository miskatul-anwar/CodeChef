#include <stdio.h>
int main(void) {
  int T, N, K;
  scanf("%d", &T);
  while (T--) {
    scanf("%d %d", &N, &K);
    if (N < 4 && K < 4) {
      printf("On\n");
    } else if (N < 4 && K == 4) {
      printf("Ambiguous\n");
    } else if (N == 4 && K < 4) {
      printf("Ambiguous\n");
    } else {
      printf("Off\n");
    }
  }
  return 0;
}
