#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int t;
  cin >> t;
looping:
  if (t--) {
    int a, b;
    cin >> a >> b;
    if (a > b) {
      if (a % b == 0) {
        cout << ceil((float)a / b) << endl;
        goto looping;
      } else if (a % b != 0 && a > b) {
        cout << a / (b - 1) << endl;
        goto looping;
      }
    } else if (b > a) {
      cout << a << endl;
      goto looping;
    }
    goto looping;
  }
  return 0;
}
