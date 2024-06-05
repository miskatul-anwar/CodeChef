#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
iterate:
  if (t--) {
    int n;
    cin >> n;
    vector<int> v;
  enter:
    if (n--) {
      int x;
      cin >> x;
      v.push_back(x);
      goto enter;
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    goto iterate;
  }
  return 0;
}
