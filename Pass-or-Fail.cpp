#include "bits/stdc++.h"
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, x, p;
    cin >> n >> x >> p;
    if (p <= x * 3 + (n - x) * -1) {
      cout << "PASS" << endl;
    } else {
      cout << "FAIL" << endl;
    }
  }
  return 0;
}
