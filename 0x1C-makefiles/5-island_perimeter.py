#!/usr/bin/python3
'''A module'''


def island_perimeter(grid):
    '''
    returns the perimeter of the island described in grid.
    '''
    row = len(grid)
    col = len(grid[0])
    count = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j]:
                # Boundary and left check
                if (j - 1 < 0) or grid[i][j - 1] == 0:
                    count += 1
                # Boundary and top check
                if (i - 1 < 0) or grid[i - 1][j] == 0:
                    count += 1
                # Boundary and right check
                if (j == col - 1) or grid[i][j + 1] == 0:
                    count += 1
                # Boundary and down check
                if (i == row - 1) or grid[i + 1][j] == 0:
                    count += 1
                else:
                    count += 0
    return count

# if __name__ == "__main__":
#    grid = [
#        [0, 0, 0, 0, 0, 0],
#        [0, 1, 0, 0, 0, 0],
#        [0, 1, 0, 0, 0, 0],
#        [0, 1, 1, 1, 0, 0],
#        [0, 0, 0, 0, 0, 0]
#    ]
#    print(island_perimeter(grid))
# ANS = 12
