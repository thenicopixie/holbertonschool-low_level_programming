#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if grid[row][col - 1] == 0 or col - 1 < 0:
                    perimeter += 1
                if grid[row + 1][col] == 0 or row + 1 >= len(grid):
                    perimeter += 1
                if grid[row - 1][col] == 0 or row - 1 < 0:
                    perimeter += 1
                if grid[row][col + 1] == 0 or col + 1 >= len(grid[0]):
                    perimeter += 1

    return perimeter
