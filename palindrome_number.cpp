#include "bits/stdc++.h"
using namespace std;
bool isPalindrome(int x) {
  if (x < 0) {
    return false;
  }
  long long reversed = 0, original = x;
  while (x > 0) {
    int digit = x % 10;
    reversed = reversed * 10 + digit;
    x /= 10;
  }
  return original == reversed;
}
int main(void) {
  int x;
  cout << "Enter a number : ";
  cin >> x;
  if (isPalindrome(x)) {
    cout << "true";
  } else {
    cout << "false";
  }
  return 0;
}
