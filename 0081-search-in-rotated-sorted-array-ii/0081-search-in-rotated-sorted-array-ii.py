class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: bool
        """
        if target not in nums:
            return False
        # for i in range(0,len(nums)):
        #     if nums[i]==target:
        #         return True
        return True