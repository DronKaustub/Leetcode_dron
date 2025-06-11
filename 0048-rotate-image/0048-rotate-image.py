class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n=len(matrix)
        m=len(matrix[0])
        h=0
        for i in range(0,n):
            for j in range(i+1,m):
                
                h = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = h
                print(matrix)
        for i in range(0,n):
            print(i)
            matrix[i].reverse()