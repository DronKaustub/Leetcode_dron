#include <vector>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
int n =nums.size();
vector<int> temp(n);
 for(int i =0;i<n;i++){
 temp[(i+k)%n]=nums[i];
 }
nums=temp;
  }
};

/* reverse(nums.begin(),nums.end());
       for(int i =1;i<k;i++){
             reverse(nums.begin()+1,nums.end());
            reverse(nums.begin(),nums.end());
       }
       
reverse(nums.begin()+1,nums.end());
          */