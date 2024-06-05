#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
         c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
string reverseVowels(string s) {
  int i = 0, j = s.size() - 1;
iterate:
  if (i < j) {
    if (isVowel(s[i]) && isVowel(s[j])) {
      swap(s[i], s[j]);
      i++, j--;
    } else if (!isVowel(s[i])) {
      i++;
    } else if (!isVowel(s[j])) {
      j--;
    }
    goto iterate;
  }
  return s;
}
