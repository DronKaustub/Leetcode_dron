class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        
        # better soln....
        remainder = len(s) % k
        if remainder != 0:
            s += fill * (k - remainder)
        
        # Use list comprehension to build the result in chunks
        return [s[i:i+k] for i in range(0, len(s), k)]
        
        
        
        # my soln below O(kN)
        
        # a=[]
        # n= len(s)

        # p= n%k
        # m=0
        # for i in range(0,n,k):
        #     dk=""
        #     for j in range(0,k):
        #         if(i+j>=n):
        #             dk+=fill
        #         else:
        #             dk+=s[i+j]

        #     a.append(dk)
           
        #     m+=1

        # return a