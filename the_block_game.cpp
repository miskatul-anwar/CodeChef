#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    s[0] == s[s.length() - 1] ? cout << "wins" << endl
                              : cout << "loses" << endl;
  }
  return 0;
}
