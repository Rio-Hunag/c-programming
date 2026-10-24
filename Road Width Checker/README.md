# Road Width Checker

## Overview

A simple C program that finds the minimum width within a specified range of road segments.

## Features

- Read road segment widths from standard input.
- Check a specified range of segments.
- Print the minimum width for each query.
- Handle invalid input and memory allocation failure.

## How to Run

Compile the program using a C compiler:

```bash
gcc main.c -o main
```

Run the program:

```bash
./main
```

On Windows, run:

```bash
main.exe
```

## Example

Input:

```text
8 3
2 3 1 2 3 2 3 3
0 3
4 6
6 7
```

Output:

```text
1
2
3
```

## Approach

For each query, the program checks the widths from the entry point to the exit point and returns the smallest value in that range.

## Complexity

- Time: O(t × n) in the worst case
- Space: O(n) for storing the road widths

## Language

C
