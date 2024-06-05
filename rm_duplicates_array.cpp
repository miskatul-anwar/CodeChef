#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
  int n = nums.size();
  if (n == 0)
    return 0; // Edge case: empty array

  int uniqueCount = 1; // At least the first element is unique
  for (int i = 1; i < n; i++) {
    if (nums[i] != nums[uniqueCount - 1]) {
      nums[uniqueCount] =
          nums[i];   // Move the unique element to the next position
      uniqueCount++; // Increment the count of unique elements
    }
  }
  return uniqueCount;
}
int main() {
  vector<int> nums;
  cout << "Enter the size of array: ";
  int size;
  cin >> size;
  for (auto i : nums) {
    cout << "Enter the element: ";
    cin >> i;
  }
  int n = removeDuplicates(nums);
  cout << "The number of unique elements in the array is: " << n << endl;
}
