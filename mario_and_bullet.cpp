#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
bullet:
  if (t--) {
    int x, y, z;
    cin >> x >> y >> z;
    x = y / x;
    z > x ? z = z - x : z = 0;
    cout << z << '\n';
    goto bullet;
  }
}
