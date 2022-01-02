class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        
        index = []
        
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    index.append([i,j])
        
        for i, j in index:
            for k in range(len(matrix[i])):
                matrix[i][k] = 0
            for p in range(len(matrix)):
                matrix[p][j] = 0