#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    list<char> l;
    string str;
    for (int i = 0; i <= str.length(); i++) {
      int c = str[i];
      l.push_back(c);
    }
    int count = 0;
    for (auto x : l) {
      if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        count++;
      }
      if (count > 2) {
        break;
      }
    }
    if (count > 2) {
      cout << "Happy" << endl;
    } else {
      cout << "Sad" << endl;
    }
  }
  return 0;
}
