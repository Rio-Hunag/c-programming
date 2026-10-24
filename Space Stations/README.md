# Flatland Space Stations

## Overview

A C program that calculates the maximum distance between any city and its nearest space station.

## Approach

1. Sort the space station positions in ascending order.
2. Calculate the distance from the first city to the first space station.
3. Check the gaps between adjacent space stations.
4. Calculate the distance from the last space station to the last city.
5. Return the maximum distance found.

## Example

**Input**
```text
5 2
0 4
```

**Output**
```text
2
```

## Complexity

- **Time Complexity:** O(m log m)
- **Space Complexity:** O(m)

Where `m` is the number of space stations.

## Language

C
