#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    for (auto it : v) {
      if (10 <= it and it <= 60) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
