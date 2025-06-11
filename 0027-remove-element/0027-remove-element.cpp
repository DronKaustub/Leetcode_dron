class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(); int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                count++;
            }
        }
    for(int i=0;i<count;i++){
        vector<int>::iterator it;
        it=find(nums.begin(),nums.end(),val);
        nums.erase(it);}
        return n-count;
    }
};