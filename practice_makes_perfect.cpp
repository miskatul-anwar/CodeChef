#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> problems;
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    problems.push_back(x);
  }
  int count = problems.size();
  for (auto i : problems) {
    if (i < 10) {
      count--;
    }
  }
  cout << count << endl;
  return 0;
}
