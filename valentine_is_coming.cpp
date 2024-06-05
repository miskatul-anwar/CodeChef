#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
iterate:
  if (t--) {
    int x, y;
    cin >> x >> y;
    cout << floor(x / y) << "\n";
    goto iterate;
  }
}
