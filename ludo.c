#include <stdio.h>

int main(void) {
  // your code goes here
  int t, turn;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &turn);
    if (turn == 6) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}

