#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
check:
  if (t--) {
    int x, h;
    cin >> x >> h;
    if (x >= h)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    goto check;
  }
  return 0;
}
