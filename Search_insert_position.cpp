#include "bits/stdc++.h"
using namespace std;
int main(int argc, char **argv) {
  vector<int> nums = {2, 4, 6, 8, 10};
  int target, count = 0, diff = nums[1] - nums[0], dist,
              last_index = nums.size() - 1, index;
  cout << "Enter target: ";
  cin >> target;
  for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
    count++;
    if (*it == target) {
      cout << "The target is at index: " << count - 1 << endl;
      return count - 1;
    }
  }
  if (target > nums[last_index]) {
    dist = target - nums[last_index];
    index = last_index + dist / diff;

  } else {
    dist = nums[last_index] - target;
    index = last_index - dist / diff;
  }
  cout << "The target is at index: " << index << endl;
  return index;
}
