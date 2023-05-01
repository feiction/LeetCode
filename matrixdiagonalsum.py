def diagonalSum(mat):
    sum = 0
    size = len(mat)
    for i in range(size):
        sum += mat[i][size - i - 1] + mat[i][i]
    if size & 1:
        mid = size // 2
        sum -= mat[mid][mid]
    return sum
