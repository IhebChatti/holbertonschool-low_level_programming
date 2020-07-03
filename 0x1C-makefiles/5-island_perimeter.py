#!/usr/bin/python3
"""[island_permieter]
"""


def island_perimeter(grid):
    """[island_perimiter]

    Args:
        grid ([list of lists]): [grid]

    Returns:
        [int]: [result]
    """
    if not grid:
        return 0
    result = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                count = 0
                for x, y in ((i-1, j), (i+1, j), (i, j-1), (i, j+1)):
                    if x < 0 or x >= len(grid) or y < 0 or y >= len(grid[0]):
                        count += 1
                    elif grid[x][y] == 0:
                        count += 1
                result += count
    return result
