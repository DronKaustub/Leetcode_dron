class Solution(object):
    def func(self, ind , target , arr , ans , ds):
        
        if(target == 0):
            print(ds)
            ans.append(ds[:])
            return
        
       
        for i in range(ind,len(arr)):
            if(i>ind and arr[i]==arr[i-1]):
                continue
            if arr[i]<=target:
                ds.append(arr[i])
                print(ds)
                self.func(i+1 , target-arr[i], arr, ans, ds)
                ds.remove(arr[i])
       



    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        ans = []
        ds = []
        candidates.sort()
        
        self.func(0, target , candidates , ans , ds)
        return ans

        