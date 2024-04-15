#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}
int main(void) {
  int t;
  cin >> t;
iterate:
  if (t--) {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    goto iterate;
  }
  return 0;
}
