class Solution(object):
    def triangleType(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        if(nums[0]+nums[1]>nums[2] and nums[1]+nums[2]>nums[0] and nums[0]+nums[2]>nums[1]): 
            if(nums[0]==nums[2] and nums[0]==nums[1]):
                return "equilateral"
            else:
                if(nums[2]==nums[0] or nums[2]==nums[1] or nums[0]==nums[1] ):
                    return "isosceles"
                else:
                    return "scalene"
            
        else:
            return "none"