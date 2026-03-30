class Solution(object):
    def searchMatrix(self, matrix, target):
        rows = len(matrix)
        cols = len(matrix[0])
        l, r = 0, rows*cols - 1

        while l<=r:
            mid = (l + r) //2
            ### convert mid to row and column index

            row = mid//cols
            col = mid%cols
            mid_val = matrix[row][col]

            if mid_val > target:
                r = mid - 1
            elif mid_val < target:
                l = mid + 1
            else:
                return True
        return False