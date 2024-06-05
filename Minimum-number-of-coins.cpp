#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n % 10 == 0) {
      cout << n / 10 << endl;
    } else if (n % 5 == 0 and n % 10 != 0) {
      n -= 5;
      cout << n / 10 + 1 << endl;
    } else {
      cout << "-1" << endl;
    }
  }
  return 0;
}
