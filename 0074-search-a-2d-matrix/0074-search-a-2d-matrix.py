class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        # normal o(m*n)
        # n=len(matrix)
        # m=len(matrix[0])
        
        # for i in range(0,n):
        #    for j in range(0,m):
        #         if matrix[i][j]==target:
        #             return True
        # return False
        # simply tried with the binary search (O(log(m*n)))
        n = len(matrix)  # Number of rows
        m = len(matrix[0])  # Number of columns

        left, right = 0, n * m - 1  # Treat as a 1D sorted list

        while left <= right:
            mid = (left + right) // 2
            row = mid // m   # Convert 1D index to row
            col = mid % m    # Convert 1D index to column

            if matrix[row][col] == target:
                return True
            elif matrix[row][col] < target:
                left = mid + 1  # Move right
            else:
                right = mid - 1  # Move left

        return False  # Not found

        # one more WAY (O(n+m))
        # if not matrix or not matrix[0]:  # Edge case: empty matrix
        #     return False
        
        # n = len(matrix)  # Rows
        # m = len(matrix[0])  # Columns
        
        # row, col = 0, m - 1  # Start at the top-right corner
        
        # while row < n and col >= 0:
        #     if matrix[row][col] == target:
        #         return True
        #     elif matrix[row][col] < target:
        #         row += 1  # Move down
        #     else:
        #         col -= 1  # Move left
        
        # return False  # Not found