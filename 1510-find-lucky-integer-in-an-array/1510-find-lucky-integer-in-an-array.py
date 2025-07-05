class Solution(object):
    def findLucky(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        n=len(arr)
        l={}
        for i in range(0,n):
            if arr[i] in l:
                l[arr[i]]+=1  
            else:
                l[arr[i]]=1
        maxi = -1
        p = 0
        for i in l:
            if i==l[i]:
                maxi = max(maxi,i)
              
        return maxi