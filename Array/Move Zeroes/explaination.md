# Code Explanation

## Problem Statement

We are given an array of integers and we need to move all the zeroes to the last index while maintaining the relative order of the non-zero elements.

## Intuition

This problem is similar to the "Find the duplicate number" problem in terms of maintaining the relative order of elements while modifying the array in place.

## Algorithm

1. **Initialize Pointer**:
   - Declare a variable `j` and set it to 0. This pointer will keep track of the position to place the next non-zero element.

2. **Shift Non-Zero Elements**:
   - Loop through the array with index `i`.
   - If `nums[i]` is not zero, set `nums[j]` to `nums[i]` and increment `j`.

3. **Fill Remaining Elements with Zeros**:
   - After the loop, set all remaining elements from index `j` to the end of the array to 0.

## Complexity Analysis

- **Time Complexity**: O(N), where N is the number of elements in the array. We traverse the array twice (once for shifting non-zero elements and once for filling zeros).
- **Space Complexity**: O(1), as we are modifying the array in place and not using any extra space.
