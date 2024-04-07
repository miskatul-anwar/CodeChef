#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> v;
  int n, i;
  cin >> n;
lets_iterate:
  if (i < n) {
    int val;
    cin >> val;
    v.push_back(val);
    i++;
    goto lets_iterate;
  }
  sort(v.begin(), v.end());
  i = 0;
lets_print:
  if (i < v.size()) {
    cout << v[i] << endl;
    i++;
    goto lets_print;
  }
  return 0;
}
