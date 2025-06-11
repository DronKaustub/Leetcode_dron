class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        start=0
        end=len(nums)
        mid=(end-start)/2+start
       
        while(start<end):
            if nums[mid]==target:
                return mid
            elif nums[mid]>target:
                end=mid
            else:
                start=mid+1
            mid=(end-start)/2+start
        return -1
        