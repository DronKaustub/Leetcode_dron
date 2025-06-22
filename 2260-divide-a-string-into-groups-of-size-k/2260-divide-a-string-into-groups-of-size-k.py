class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        a=[]
        n= len(s)

        p= n%k
        m=0
        for i in range(0,n,k):
            dk=""
            for j in range(0,k):
                if(i+j>=n):
                    dk+=fill
                else:
                    dk+=s[i+j]

            a.append(dk)
           
            m+=1

        return a