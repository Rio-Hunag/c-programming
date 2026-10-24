# Andy's Workbook

## Overview

A C program that counts the number of special problems in a workbook.

A problem is considered special when its problem number matches the page number where it appears.

## Approach

1. Start with page 1.
2. Process each chapter and divide its problems into groups of up to `k` problems per page.
3. Determine the problem number range on each page.
4. Check whether the current page number falls within that range.
5. Count each special problem and return the total.

## Example

**Input**

```text
5 3
4 2 6 1 10
```

**Output**

```text
4
```

## Complexity

- **Time Complexity:** O(n + S), where `S` is the total number of problems.
- **Space Complexity:** O(n) for storing the chapter problem counts.

## Language

C
