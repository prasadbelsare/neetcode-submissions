class Solution:
    def helper(self, grid, r, c):
        grid[r][c] = 0
        lst = [(r - 1, c), (r + 1, c), (r, c - 1), (r, c + 1)]
        area = 1
        for row, col in lst:
            if (
                row >= 0
                and col >= 0
                and row < len(grid)
                and col < len(grid[row])
                and grid[row][col] == 1
            ):
                area += self.helper(grid, row, col)

        return area

    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        res = 0
        for r in range(len(grid)):
            for c in range(len(grid[0])):
                if grid[r][c] == 1:
                    area = self.helper(grid, r, c)
                    res = max(area, res)
        return res
