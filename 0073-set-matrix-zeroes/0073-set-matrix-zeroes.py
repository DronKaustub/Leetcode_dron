class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        
        n=len(matrix)
        m=len(matrix[0])
        print(m,n)
        coln=1
        for i in range(0,n):
            for j in range(0,m):
                if matrix[i][j]==0:
                    matrix[i][0]=0
                    if j!=0:
                        matrix[0][j]=0
                    else:
                        coln=0
                        
        for i in range(1,n):
            for j in range(1,m):
                if matrix[i][0]==0 or matrix[0][j]==0:
                    matrix[i][j]=0
        if matrix[0][0]==0:
            for i in range(0,m):
                matrix[0][i]=0
        if coln==0:
            for i in range(0,n):
                matrix[i][0]=0