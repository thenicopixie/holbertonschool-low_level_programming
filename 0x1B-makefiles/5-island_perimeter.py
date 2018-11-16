#!/usr/bin/python3
"""
Island Perimeter
"""
def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    perimeter = 1
    above = -1
    below = 1
    for row in grid:
        for col in row:
            if row[col] == 1:
                if row[col - 1] == 0:
                    perimeter += 1
                if row[col + 1] == 0:
                    perimeter += 1
                if grid[above][col] == 0:
                    perimeter += 1
                if grid[below][col] == 0:
                    perimeter += 1
        above += 1
        below += 1
    return perimeter

