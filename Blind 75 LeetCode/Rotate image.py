class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        inside = []
        rotated = []
        for i in range(len(matrix)):
            j = len(matrix[i]) - 1
            while j >= 0:
                inside.append(matrix[j][i])
                j -= 1
            rotated.append(inside.copy())
            inside.clear()
        matrix.clear()
        
        for i in range(len(rotated)):
            matrix.append(rotated[i])