#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
iterate:
  if (t--) {
    int a, b, c, flag = 0;
    cin >> a >> b >> c;
    if (a + b == c) {
      flag++;
    } else if (a + c == b) {
      flag++;
    } else if (b + c == a) {
      flag++;
    } else {
      flag = 0;
    }
    flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;
    goto iterate;
  }
  return 0;
}
