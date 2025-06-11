class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums=[]
        nums=nums1+nums2
        print(nums)
        nums.sort()
        print(nums)
        if len(nums)%2==0:
            print(nums[(len(nums)-1)/2])
            ans=nums[(len(nums)-1)/2]+nums[(len(nums)/2)]
            return ans/2.0
        else:
            return nums[len(nums)/2]
        return 0.0