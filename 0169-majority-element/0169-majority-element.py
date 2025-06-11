class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dic ={}
        for i in nums:
            if i in dic:
                count=dic.get(i)
                dic[i]=count+1
            else:
                dic[i]=1
            if dic.get(i)>len(nums)/2:
                return i
        
            