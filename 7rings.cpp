#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int a, b, t, x, count;
  cin >> t;
  while (t--)
  {
    count = 0;
    cin >> a >> b;
    x = a * b;
    while (x != 0)
    {
      x /= 10;
      count++;
    }
    count == 5 ? cout << "Yes" << endl : cout << "No" << endl;
  }
  return 0;
}
