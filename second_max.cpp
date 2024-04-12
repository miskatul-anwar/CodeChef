#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y && z > x)
      cout << x << endl;
    else if (y > x && z > y)
      cout << y << endl;
    else
      cout << z << endl;
  }
  return 0;
}

