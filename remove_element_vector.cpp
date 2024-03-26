#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int num;
  vector<int> v;
  v = {1, 2, 3, 4, 5, 5, 6, 2, 3, 2, 1, 2, 34, 100};
  cout << "Enter a number to remove." << endl;
  cin >> num;
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
