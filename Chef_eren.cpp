#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int N, A, B;
    cin >> N >> A >> B;
    int even_sum = 0, odd_sum = 0;
    for (int i = 1; i <= N; i++) {
      if (i % 2 == 0) {
        even_sum++;
      } else {
        odd_sum++;
      }
    }
    cout << even_sum * A + odd_sum * B << endl;
  }
  return 0;
}
