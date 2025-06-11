class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        l=0
        r=0  
        n=len(nums)
        maxcount=0
        count=0
        zeros=0
        sums=0
        while(r<n):
            if(nums[r]==0):
                zeros+=1
            print("zeros", zeros)
            if(zeros>k):
                print(nums[l])
                if(nums[l]==0):
                    zeros-=1
                l+=1
            sums=sums+nums[r]
            count=r-l+1
            
            if(zeros<=k):
                if(maxcount<count):
                    maxcount=count
            r+=1
        return maxcount