#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n * 4 <= 1000) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
