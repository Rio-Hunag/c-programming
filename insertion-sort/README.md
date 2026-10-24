# Insertion Sort 

## Overview

A C program that inserts the last element of an array into its correct position in the sorted portion of the array.

## Approach

1. Store the last element as the target value.
2. Compare the target with the elements before it, moving from right to left.
3. Shift each larger element one position to the right.
4. Print the array after each shift.
5. Insert the target into its correct position and print the final array.

## Example

**Input**

```text
5
2 4 6 8 3
```

**Output**

```text
2 4 6 8 8
2 4 6 6 8
2 4 4 6 8
2 3 4 6 8
```

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1) auxiliary space, excluding the input array.

## Language

C
