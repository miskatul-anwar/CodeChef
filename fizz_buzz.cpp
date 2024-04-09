#include "bits/stdc++.h"
using namespace std;
vector<string> fizzBuzz(int n) {
  int i = 1;
  vector<string> s;
ignite:
  if (i <= n) {
    if (i % 3 == 0 && i % 5 != 0) {
      s.push_back("Fizz");
    } else if (i % 5 == 0 && i % 3 != 0) {
      s.push_back("Buzz");
    } else if (i % 3 == 0 && i % 5 == 0) {
      s.push_back("FizzBuzz");
    } else {
      s.push_back(to_string(i));
    }
    i++;
    goto ignite;
  }
  return s;
}
