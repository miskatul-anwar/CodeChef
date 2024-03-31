#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int x, y, t;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    x >= y * 2 ? cout << x / (y * 2) << endl : cout << "0" << endl;
  }
  return 0;
}
