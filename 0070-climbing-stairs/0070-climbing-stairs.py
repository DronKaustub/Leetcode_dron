class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        # if n == 1:
        #     return 1
        # a, b = 1, 2
        # for _ in range(3, n + 1):
        #     t=b
        #     b = a + b
        #     a=t
            
            
        # return b
        if n == 0 or n == 1: 
            return 1 
        if n == 2: 
            return 2 

        n_ways = [1, 2] 
        for i in range(2, n): 
            n_ways.append(n_ways[i-1] + n_ways[i-2])
            print(n_ways)

        return n_ways[n-1]