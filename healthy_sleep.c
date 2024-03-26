#include "stdio.h"
int main(void) {
  int H;
  scanf("%d", &H);
  if (H < 8) {
    printf("LESS\n");
  } else if (H == 8) {
    printf("PERFECT\n");
  } else {
    printf("MORE\n");
  }
  return 0;
}
