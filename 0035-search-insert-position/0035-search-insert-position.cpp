class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int end= nums.size();
        int start=0;
        int mid = start+(end-start)/2;
        //cout << a;
        int e=-1234;
        while(start<end){
            if(nums[mid]==target){
                e=nums[mid];
                return mid;
            }
            else if (nums[mid]>target){
                end=mid;
            }
            else if (nums[mid]<target){
                start=mid+1;
            }
            mid = start+(end-start)/2;

        }
        if(e!= target){
            return end;
        }

        return 0;
    }
};