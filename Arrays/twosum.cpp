// LeetCode #1: Two Sum
// Problem: Find two indices i, j such that nums[i] + nums[j] = target
// Approach: Brute Force O(n^2) solution
// Language: C++

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
