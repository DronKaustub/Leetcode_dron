class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;

        for (int i = 0; i < n; ++i) {
            if (i > maxReach) {
                return false; // If our current index is beyond the maximum reachable index, return false
            }
            maxReach = std::max(maxReach, i + nums[i]);
            if (maxReach >= n - 1) {
                return true; // If we can reach or go beyond the last index, return true
            }
        }

        return false; // If loop ends without reaching the last index
    }
};
