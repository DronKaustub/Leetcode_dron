class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        a=[]
        j=0
        for i in range(0,n):
            if nums[i] not in a:
                a.append(nums[i])
                nums[j]=a[j]
                j+=1
        
        print(a)
        return len(a)
        
        