#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int n, t;
  string s;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'T') {
        s[i] = 'A';
      } else if (s[i] == 'A') {
        s[i] = 'T';
      } else if (s[i] == 'C') {
        s[i] = 'G';
      } else if (s[i] == 'G') {
        s[i] = 'C';
      }
    }
    cout << s << endl;
  }
  return 0;
}
