class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        maxi=float('-inf')
        print(maxi)
        sum=0
        for i in range(0,n):
            if sum<0:
                sum=0
            sum+=nums[i]
            
            if sum>maxi:
                maxi=sum
            
        return maxi

