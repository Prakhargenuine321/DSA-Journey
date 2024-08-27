#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const long long MOD = 1e9 + 7; // Use long long for modulo

vector<int> apply_operations(vector<int>& nums, int k, int multiplier) {
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> min_heap;

  // Create a min-heap with elements (cast to long long) and their indices
  for (int i = 0; i < nums.size(); i++) {
    min_heap.push({(long long)nums[i], i});
  }

  // Perform k operations
  for (int i = 0; i < k; i++) {
    long long min_val = min_heap.top().first;
    int index = min_heap.top().second;
    min_heap.pop();

    long long new_val = ((min_val * multiplier) % MOD + MOD) % MOD; // Handle negative modulo
    nums[index] = (int)new_val; // Cast back to int for final result
    min_heap.push({new_val, index});
  }

  return nums;
}

int main() {
  vector<int> nums = {100000, 2000};
  int k = 2, multiplier = 1000000;

  vector<int> result = apply_operations(nums, k, multiplier);
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}