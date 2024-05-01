#include "bits/stdc++.h"
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    if (a.size() < 4 or b.size() < 4) {
      cout << "-1\n";
    }
    sort(a.begin(), a.end()), sort(b.begin(), b.end());
    int cnt = 0;
    for (int i = n - 1; i >= 4; i--) {
      cnt++;
      erase(a.begin(), a.end(), a[i]);
    }
  }
}
