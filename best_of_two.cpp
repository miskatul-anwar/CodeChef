#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    a >= b ? cout << a << endl : cout << b << endl;
  }
  return 0;
}
