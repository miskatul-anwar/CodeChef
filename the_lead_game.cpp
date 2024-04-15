#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> player1, player2, lead1, lead2;
  for (int i = 0; i < n; i++) {
    int n1, n2;
    cin >> n1 >> n2;
    player1.push_back(n1), player2.push_back(n2);
  }
  for (int i = 0; i < n; i++) {
    player1[i] > player2[i] ? lead1.push_back(player1[i] - player2[i])
                            : lead2.push_back(player2[i] - player1[i]);
  }
  int n1 = *max_element(lead1.begin(), lead1.end());
  int n2 = *max_element(lead2.begin(), lead2.end());
  if (n1 > n2) {
    cout << "1"
         << " " << n1 << endl;
  } else {
    cout << "2"
         << " " << n2 << endl;
  }
  return 0;
}
