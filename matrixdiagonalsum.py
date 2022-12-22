def diagonalSum(mat):
    sum = 0
    size = len(mat)
    for i in range(size):
        sum += mat[i][size - i]
    return sum
