#include <bits/stdc++.h>
using namespace std;

struct BinaryString {
  string value;
  int length;
};
int main(void) {
  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    int n, k;
    cin >> n >> k;
    BinaryString strings[n];
    set<int> unique_set;
    for (int i = 0; i < n; i++) {
      cin >> strings[i].value;
      strings[i].length = k;
      int count_one = 0, last_index_one = -1;
      for (int j = 0; j < k; j++) {
        if (strings[i].value[j] == '1') {
          count_one++;
          last_index_one = j;
        }
      }
      if (count_one == 1) {
        unique_set.insert(last_index_one);
      }
    }
    if (unique_set.size() == k) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
