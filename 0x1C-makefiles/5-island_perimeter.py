#!/usr/bin/python3

"""
Solution to Technical Interview Preparation
"""


def island_perimeter(grid):
    """
    Return the perimeter of the island described in `grid`
    *   `grid` is a list of list of integers:
        *   0 represents a water zone
        *   1 represents a land zone
        *   One cell is a square with side length 1
        *   Grid cells are connected horizontally/vertically (not diagonally)
        *   Grid is rectangular, width and height don't exceed 100

    *   Grid is completely surrounded by water,
        and there is one island (or nothing)
    *   The island doesn't have `lakes` (water inside that isn't connected
        to the water around the island)
    """

    # Ensure grid is a list of lists
    if (grid is None):
        print("Error: grid is {}".format(grid))
        return 0

    if (len(grid) > 1):
        if (len(grid[0]) < 1):
            print("Error: grid has empty rows")
            return 0
    else:
        print("Error: grid is empty")
        return 0

    # Ensure grid is rectangular
    width = len(grid[0])    # width of first row
    for row in grid:
        if len(row) != width:
            print("Error: grid must be rectangular")
            return 0

    # Declaration of necessary variables
    total_perimeter = int()     # total perimeter of island
    land_zone = 1       # land zone is marked 1
    water_zone = 0      # water zone is marked 0
    perimeter_of_cell = 4   # each land zone has a perimeter of 4 unit
    perimeter_of_side = 1    # each side of a land zone is 1 unit

    for row in range(len(grid)):
        row_perimeter = int()   # total perimeter gotten from a row
        col = -1     # for marking position in row

        for element in grid[row]:
            col += 1    # increment column count

            # if element is a land zone
            if element == land_zone:
                row_perimeter += perimeter_of_cell
            else:
                continue    # go to the next element

            # check if left element (if any) is a land zone
            try:
                if (grid[row][col - 1] == land_zone) and (col > 0):
                    # subtract the adjacent side
                    row_perimeter -= perimeter_of_side
            except IndexError:      # do nothing if there is no such element
                pass

            # check if right element (if any) is a land zone
            try:
                if (grid[row][col + 1] == land_zone):
                    # subtract the adjacent side
                    row_perimeter -= perimeter_of_side
            except IndexError:      # do nothing if there is no such element
                pass

            # check if top element (if any) is a land zone
            try:
                if (grid[row - 1][col] == land_zone) and (row > 0):
                    # subtract the adjacent side
                    row_perimeter -= perimeter_of_side
            except IndexError:      # do nothing if there is no such element
                pass

            # check if the bottom element (if any) is a land zone
            try:
                if grid[row + 1][col] == land_zone:
                    # subtract the adjacent side
                    row_perimeter -= perimeter_of_side
            except IndexError:      # do nothing if there is no such element
                pass

        # end of row

        total_perimeter += row_perimeter

    return total_perimeter
