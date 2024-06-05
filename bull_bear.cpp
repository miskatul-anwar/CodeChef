#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
iterate:
  if (t--) {
    int a, b;
    cin >> a >> b;
    if (a > b) {
      cout << "LOSS" << endl;
    } else if (a == b) {
      cout << "NEUTRAL" << endl;
    } else {
      cout << "PROFIT" << endl;
    }
    goto iterate;
  }
  return 0;
}
