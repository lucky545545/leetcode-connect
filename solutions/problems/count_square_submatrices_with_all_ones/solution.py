class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        count = 0
        m = len(matrix)
        n = len(matrix[0])
        for i in range(0,n):
            count += matrix[0][i]
        for i in range(1, m):
            count += matrix[i][0]
        for i in range(1,m):
            for j in range(1,n):
                if(matrix[i][j] == 1 and matrix[i][j-1] > 0 and matrix[i-1][j] > 0 and matrix[i-1][j-1]):
                    matrix[i][j] += min(matrix[i][j-1] , matrix[i-1][j] , matrix[i-1][j-1])
                count += matrix[i][j]

        return count