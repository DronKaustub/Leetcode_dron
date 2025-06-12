class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n= nums.size();
        int a[100];
        int i=0;
        int max=0;
        for(i =0;i<n-1;i++){
            a[i]= abs(nums[i]-nums[i+1]);
            if (a[i]>max){
                max=a[i];
            }
        }      
        a[i]=abs(nums[0]-nums[n-1]);
        if (a[i]>max){
                max=a[i];
            }
        return max;
    }
};