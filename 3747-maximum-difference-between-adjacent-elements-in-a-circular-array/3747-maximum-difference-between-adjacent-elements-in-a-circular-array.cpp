class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n= nums.size();
        int sum=abs(nums[0]-nums[n-1]);;
        int i=0;
        int max=sum;
        for(i =0;i<n-1;i++){
            sum= abs(nums[i]-nums[i+1]);
            if (sum>max){
                max=sum;
            }
        }      
        
        return max;
    }
};