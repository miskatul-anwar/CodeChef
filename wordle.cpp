#include <iostream>
#include <string>
using namespace std;

// Function to determine string MM
string determine_MM(string S, string T) {
  string M = "";
  for (int i = 0; i < S.length(); i++) {
    if (S[i] == T[i]) {
      M += 'G';
    } else {
      M += 'B';
    }
  }
  return M;
}

int main() {
  // Number of test cases
  int num_tests;
  cin >> num_tests;

  // Iterate through each test case
  for (int t = 0; t < num_tests; t++) {
    string S, T;
    // Input hidden word SS and guess word TT
    cin >> S >> T;

    // Determine string MM
    string M = determine_MM(S, T);

    // Output string MM
    cout << M << endl;
  }
  return 0;
}
