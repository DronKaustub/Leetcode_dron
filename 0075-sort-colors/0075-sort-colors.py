class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        for i in range(0,n-1):
            for j in range(i+1,n):
                if(nums[i]>nums[j]):
                    p=nums[i]
                    nums[i]=nums[j]
                    nums[j]=p
        return nums