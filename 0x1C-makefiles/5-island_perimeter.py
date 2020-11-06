#!/usr/bin/python3
"""Defines an island perimeter."""


def island_perimeter(grid):
    """Return the perimiter of an island."""
    num = 0
    for i in grid:
        if 1 in i:
            num += 2
    l = []
    for i in range(len(grid[0])):
        new = []
        for j in range(len(grid)):
            new.append(grid[j][i])
        l.append(new)

    for i in l:
        if 1 in i:
            num += 2

    return num
