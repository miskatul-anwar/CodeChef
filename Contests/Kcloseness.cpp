#include "bits/stdc++.h"
#include <vector>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int max_element = *std::max_element(a.begin(), a.end());
    int min_element = *std::min_element(a.begin(), a.end());
    int result = max_element - min_element;
    cout << result << endl;
  }
  return 0;
}
