# Code Explanation

## Intuition

Let's first read the question properly. We are given a sorted array containing duplicates and we have to remove the duplicates in place and return an index such that the subarray before the index doesn't contain any duplicates.

## Algorithm

1. Create a variable `j` and point it to the first index.
2. Run a for loop from 1 to `n-1` (where `n` is the length of the array).
3. If the previous element is not the same as the current element:
   - Set the value of the element at index `j` to the current element.
   - Increment `j`.

Finally, return `j` as our answer.

## Dry Run

![Dry run](https://i.postimg.cc/BZHxqBmP/Whats-App-Image-2024-07-20-at-10-50-57-PM.jpg)

### Example

Given the array: `[0, 0, 1, 1, 1, 2, 2, 3, 3, 4]`

1. Initialize `j` to 1.
2. Start iterating from the second element (index 1):
   - Compare `arr[1]` (0) with `arr[0]` (0): They are the same, so continue.
   - Compare `arr[2]` (1) with `arr[1]` (0): They are different, set `arr[j]` to `arr[2]` (1) and increment `j` to 2.
   - Compare `arr[3]` (1) with `arr[2]` (1): They are the same, so continue.
   - Compare `arr[4]` (1) with `arr[3]` (1): They are the same, so continue.
   - Compare `arr[5]` (2) with `arr[4]` (1): They are different, set `arr[j]` to `arr[5]` (2) and increment `j` to 3.
   - Continue this process until the end of the array.

The final array will be `[0, 1, 2, 3, 4, ..., ...]` with `j` equal to 5. The subarray `[0, 1, 2, 3, 4]` contains no duplicates, and the value of `j` (5) is the length of this subarray.
