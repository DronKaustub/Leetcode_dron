
class Solution {
public:
    bool addThese(vector<int>& nums, int dis, int k){
        int count=1;
        int sum=0;
        for(int i =0;i<nums.size();i++){
            
        if(sum + nums[i] > dis){
            count++;
            sum = nums[i]; // Start a new subarray
        } 
        else {
            sum += nums[i];
        }
        if(count > k) {return false;}
        }
        
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low= *max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(addThese(nums,mid,k)){
                ans=mid;
                
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};