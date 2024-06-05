#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int S, X, Y, Z, cnt = 0;
    cin >> S >> X >> Y >> Z;
    if (S - X - Y >= Z) {
      cnt = 0;
    } else if (S - X >= Z) {
      cnt++;
    } else if (S - Y >= Z) {
      cnt++;
    } else {
      cnt += 2;
    }
    cout << cnt << endl;
  }
}
