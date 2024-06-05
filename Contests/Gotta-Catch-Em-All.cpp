#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int T;
  cin >> T;
  while (T--) {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> difficulties(n);
    for (int i = 0; i < n; i++) {
      cin >> difficulties[i];
    }
    int totalcost = 0;
    for (int difficulty : difficulties) {
      totalcost += min(difficulty * x, y);
    }
    cout << totalcost << endl;
  }
  return 0;
}
