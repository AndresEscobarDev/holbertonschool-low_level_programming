#!/usr/bin/python3
""" Island Module """


def island_perimeter(grid):
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] != 0:
                if i > 0 and grid[i - 1][j] == 0:
                    p += 1
                if i + 1 < len(grid) and grid[i + 1][j] == 0:
                    p += 1
                if j > 0 and grid[i][j - 1] == 0:
                    p += 1
                if j + 1 < len(grid[i]) and grid[i][j + 1] == 0:
                    p += 1
    return p