#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a;
    string s;
    cin >> a >> s;

    unordered_map<char, char> m = {
        {'A', 'T'},
        {'T', 'A'},
        {'G', 'C'},
        {'C', 'G'},
    };

    string reverse_complement;
    for (char c : s) {
      if (m.find(c) != m.end()) {
        reverse_complement += m[c];
      }
    }

    // Reverse the string
    reverse(reverse_complement.begin(), reverse_complement.end());

    cout << a << " " << reverse_complement << endl;
  }

  return 0;
}

