#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long res = v[0];
    for (int i = 1; i < n; i++) {
      res = max(res * 1LL * v[i], res + v[i]);
      res %= MOD;
    }
    cout << res << endl;
  }
  return 0;
}
