#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int a, t;
  cin >> t;
  while (t--) {
    cin >> a;
    if (a >= 67 && a <= 45000)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
