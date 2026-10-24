# Time Conversion

## Overview

A C program that converts a 12-hour time format with an AM/PM indicator into a 24-hour time format.

## Approach

1. Parse the hour, minute, second, and AM/PM indicator from the input string.
2. For `12:xx:xx AM`, convert the hour to `00`.
3. For other AM times, keep the hour unchanged.
4. For `12:xx:xx PM`, keep the hour unchanged.
5. For other PM times, add 12 to the hour.
6. Format the result as `HH:MM:SS` and print it.

## Example

**Input**
```text
07:05:45PM
```

**Output**
```text
19:05:45
```

## Complexity

- **Time Complexity:** O(1)
- **Space Complexity:** O(1), excluding the returned string's fixed-size allocation.

## Language

C

## File Structure

```text
time-conversion/
├── main.c
└── README.md
```
