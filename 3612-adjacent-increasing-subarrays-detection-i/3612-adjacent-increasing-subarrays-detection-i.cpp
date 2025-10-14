class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        
        // For each position, store length of strictly increasing subarray ending here
        vector<int> lengths(n, 1);
        
        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i-1]) {
                lengths[i] = lengths[i-1] + 1;
            }
        }
        
        // Check if two adjacent k-length subarrays exist
        for(int i = k - 1; i < n - k; i++) {
            // First subarray ends at i, second ends at i+k
            if(lengths[i] >= k && lengths[i + k] >= k) {
                return true;
            }
        }
        
        return false;
    }
};