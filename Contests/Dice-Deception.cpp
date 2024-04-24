#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int sum = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
      if (k) {
        int a = 7 - v[i];
        if (a > v[i]) {
          v[i] = a;
        }
        k--;
      }
      sum += v[i];
    }
    cout << sum << endl;
  }
  return 0;
}
