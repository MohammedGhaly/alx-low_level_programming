#!/usr/bin/python3
'''module containing (island_perimeter) function'''


def island_perimeter(grid: list):
    '''a function to calculate the perimeter of an island
       represented by cells of value (1) in 2d matrix (list of lists)
    '''

    res = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                res += get_outer_sides(grid, i, j, len(grid), len(grid[0]))
    return res


def get_outer_sides(grid: list, row, col, height, width):
    '''
    helper function to calculate a cell contribution to the perimeter
    '''

    outer_sides = 0
    if row == 0 or not grid[row - 1][col]:
        outer_sides += 1
    if row == (height - 1) or not grid[row + 1][col]:
        outer_sides += 1
    if col == (width - 1) or not grid[row][col + 1]:
        outer_sides += 1
    if col == 0 or not grid[row][col - 1]:
        outer_sides += 1
    return outer_sides
