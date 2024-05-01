#include "bits/stdc++.h"
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << ((100 - n) / 10) * 10 << endl;
  }
  return 0;
}
