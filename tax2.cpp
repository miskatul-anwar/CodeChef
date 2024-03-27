#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int n, a;
  cin >> n;
  while (n--) {
    cin >> a;
    if (a > 100) {
      cout << a - 10 << endl;
    } else {
      cout << a << endl;
    }
  }
  return 0;
}
