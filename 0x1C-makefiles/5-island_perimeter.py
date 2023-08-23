#!/usr/bin/python3
"""
Technical Interview Preparation

- `grid` is a list of list of integers:
    *   0 represents a water zone
    *   1 represents a land zone
    *   One cell is a square with side length 1
    *   Grid cells are connected horizontally/vertically (not diagonally).
    *   Grid is rectangular, width and height don’t exceed 100

- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected
    to the water around the island)
"""


def island_perimeter(grid):
    """
    Return the perimeter of the island described in 'grid'
    """

    # Ensure 'grid' is a list of lists
    if type(grid) is list:
        if len(grid) == 0:
            # print("Error: grid is emtpy")
            return 0

        # Ensure each row is of equal length
        row_len = len(grid[0])
        for row in range(len(grid)):

            # Ensure row is a list
            if type(grid[row]) is not list:
                # print("Error: row '{}' is not a list".format(row))
                return 0

            # Ensure row is not empty
            if len(grid[row]) == 0:
                # print("Error: row '{}' is empty".format(row))
                return 0

            # Ensure each row is of equal length
            if len(grid[row]) != row_len:
                # print("Error: row '{}' is not of equal length".format(row))
                return 0
    else:
        # print("Error: grid is not a list")
        return 0

    # Declare necessary values
    land_zone = 1   # Each land zone is marked 1
    water_zone = 0  # Each water zone is marked 0
    perimeter_of_cell = 4   # Each cell has 4unit length as perimeter
    length_of_side = 1      # Each side is 1unit long
    total_perimeter = 0     # Total perimeter of grid
    row_len = len(grid[0])  # length of row

    for row in range(len(grid)):
        row_perimeter = 0   # Total perimeter of row

        for col in range(row_len):
            # for land zones
            if grid[row][col] == land_zone:
                row_perimeter += perimeter_of_cell
            else:   # A water zone; get to next cell
                continue

            # For land zones only

            # If there is a left element: note column -1 is the last column
            try:
                if grid[row][col - 1] == land_zone and (col > 0):
                    row_perimeter -= length_of_side
            except IndexError:
                pass

            # If there is a right element
            try:
                if grid[row][col + 1] == land_zone:
                    row_perimeter -= length_of_side
            except IndexError:
                pass

            # If there is a top element row -1 is the last row
            try:
                if grid[row - 1][col] == land_zone and (row > 0):
                    row_perimeter -= length_of_side
            except IndexError:
                pass

            # If there is a bottom element
            try:
                if grid[row + 1][col] == land_zone:
                    row_perimeter -= length_of_side
            except IndexError:
                pass

        # Include the perimeter of a row
        total_perimeter += row_perimeter

    # Final result
    return total_perimeter
