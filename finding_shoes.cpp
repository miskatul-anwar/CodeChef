#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
check:
  if (t--) {
    int n, m;
    cin >> n >> m;
    if (n < m) {
      cout << n << endl;
    } else {
      cout << 2 * n - m << endl;
    }
    goto check;
  }
  return 0;
}
