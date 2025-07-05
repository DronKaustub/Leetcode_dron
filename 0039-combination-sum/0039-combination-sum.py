class Solution(object):
    def func(self, i , target , arr , ans , ds):
        if(len(arr) == i):
            if(target == 0):
                # print(ds)
                ans.append(ds[:])
            return
        
        if target>=arr[i]:
            ds.append(arr[i])
            self.func(i , target-arr[i], arr, ans, ds)
            ds.remove(arr[i])
        self.func(i+1,target , arr, ans,ds)




    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        ans = []
        ds = []
        self.func(0, target , candidates , ans , ds)
        return ans

        