class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        n=len(nums1)
        m=len(nums2)
        ans=[]
        for i in range (0,n):
            if nums1[i] in nums2:
                if nums1[i] not in ans:
                    ans.append(nums1[i])
        return ans