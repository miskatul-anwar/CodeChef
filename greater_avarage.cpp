#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  float a, b, c, t;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    (a + b) / 2 > c ? cout << "yes" << endl : cout << "no" << endl;
  }
  return 0;
}
