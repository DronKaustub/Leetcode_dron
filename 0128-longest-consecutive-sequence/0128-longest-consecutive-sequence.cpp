class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0){return 0;}
        int count=1;
        int maxi= 0;
        int last=nums[0];
        for(int i=0;i<n-1;i++){
            cout<<"nums[i+1] : "<<nums[i+1] <<" last : "<<last<<endl;
            if(nums[i+1]==last+1){
                last=nums[i+1];
                count++;
                if(maxi<count){
                    maxi=count;
                }
                // maxi=max(maxi,count);
            }
            else if(nums[i+1]>=nums[i]+1){
                last=nums[i+1];
                count=1;
            }
        }
        maxi=max(maxi,count);
        return maxi;
    }
};