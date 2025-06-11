class Solution(object):
    
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """
        a=1
        matrix = [[0] * n for _ in range(n)]  # Create an n x n matrix filled with 0s
        m=n
        left=0
        top=0
        right=m-1
        bottom=n-1
        ans=[]
        # print("start ",top,bottom,left,right)
        while(top<=bottom and left<=right):
            for i in range(left,right+1):
                matrix[top][i]=a
                a+=1
            top+=1
            #print("over 1",top,bottom,left,right)
            for i in range(top,bottom+1):
                matrix[i][right]=a
                a+=1
            right-=1
            #print("over 2",top,bottom,left,right)
            if top<=bottom:
                for i in range(right,left-1,-1):
                    matrix[bottom][i]=a
                    a+=1
            bottom-=1
            #print("over 3",top,bottom,left,right)
            if left<=right:
                for i in range(bottom,top-1,-1):
                    matrix[i][left]=a
                    a+=1
                left+=1
                # print("over 4",top,bottom,left,right)
        return matrix
    
      
        

        # for i in range(0, n):
        #     for j in range(0, n):
        #         ans[i][j] = a
        #         a += 1
      