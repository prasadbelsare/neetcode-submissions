class Solution:
    def helper(self, grid, r, c):
        grid[r][c] = 0
        lst = [(r - 1, c), (r + 1, c), (r, c - 1), (r, c + 1)]

        for row, col in lst:
            if (
                row >= 0
                and col >= 0
                and row < len(grid)
                and col < len(grid[row])
                and grid[row][col] == "1"
            ):
                self.helper(grid, row, col)

    def numIslands(self, grid: List[List[str]]) -> int:
        r = len(grid)
        c = len(grid[0])
        res = 0

        for r in range(len(grid)):
            for c in range(len(grid[0])):
                if grid[r][c] == "1":
                    self.helper(grid, r, c)
                    res += 1

        return res
