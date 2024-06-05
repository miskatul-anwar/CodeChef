#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a > b) {
      cout << a - b << endl;
    } else {
      cout << "0" << endl;
    }
  }
  return 0;
}
