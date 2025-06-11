class Solution {
public:
    void moveZeroes(vector<int>& nums) {
   /*     int s=nums.size()-1;
    for(int i =s;i>=0;i--){
        if(nums[i]==0){int j=i;
            while(j<s){
            swap(nums[j],nums[j+1]);
           j++;
        }}
    }*/
    int i = 0;
for(int j=0;j<nums.size(); j++) {
if(nums[j] !=0) {
    swap(nums[j], nums[i]);
    i++;
    }
    }
    
    }
};