#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int n, a, b;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    a > b ? cout << "A" : cout << "B";
  }
  return 0;
}
