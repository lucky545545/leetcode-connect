class Solution(object):
    def rotate(self, matrix):
        for i in range( len(matrix)-1):
            for j in range(i+1 , len(matrix)):
                if(i == j):
                    continue
                else:
                    temp = matrix[i][j]
                    matrix[i][j] = matrix[j][i]
                    matrix[j][i] = temp
        for i in range(len(matrix)):
            matrix[i].reverse()
        return matrix
           
      