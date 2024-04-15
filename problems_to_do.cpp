#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
iterate:
  if (t--) {
    int n;
    cin >> n;
    int array[n], count = n;
    for (int i = 0; i < n; i++) {
      cin >> array[i];
      if (array[i] < 1000) {
        count--;
      }
    }
    cout << count << endl;
    goto iterate;
  }
  return 0;
}
