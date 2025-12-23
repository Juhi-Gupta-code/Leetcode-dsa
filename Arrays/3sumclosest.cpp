// LeetCode 16 - 3Sum Closest
// Time: O(n^2), Space: O(1)

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestsum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (abs(sum - target) < abs(closestsum - target))
                    closestsum = sum;

                if (sum < target) left++;
                else if (sum > target) right--;
                else return sum;
            }
        }
        return closestsum;
    }
};
