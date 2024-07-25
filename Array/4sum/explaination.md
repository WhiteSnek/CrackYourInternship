Here's a detailed explanation in Markdown format for finding unique quadruplets that sum up to a given target.

---

# Finding Quadruplets with Target Sum

## Problem Statement

Given an array of integers, return all possible and unique quadruplets `[a, b, c, d]` such that:
- `a + b + c + d = target`
- Each quadruplet consists of elements with different indices.

## Intuition

Using a brute-force approach with four nested loops would result in a time complexity of \(O(n^4)\), which is inefficient for large arrays. Instead, we can optimize the solution by reducing the problem to a 2Sum problem, achieving a time complexity of \(O(n^3)\).

## Algorithm

1. **Sort the Array**: Sorting helps in easily skipping duplicates and managing the two-pointer approach.
2. **Iterate with Two Fixed Pointers**: Loop through the array with two indices `i` and `j` as the fixed pointers.
3. **Skip Duplicates**: If the current element is the same as the previous one, skip it to avoid duplicate quadruplets.
4. **Two-Pointer Approach**:
    - Initialize two pointers, `k` (starting from `j + 1`) and `l` (starting from the end of the array).
    - Compute the sum of elements at indices `i`, `j`, `k`, and `l`.
    - If the sum equals the target, add the quadruplet to the result and move both pointers while skipping duplicates.
    - If the sum is less than the target, increment `k` to increase the sum.
    - If the sum is greater than the target, decrement `l` to decrease the sum.
5. **Continue Until k < l**: The process continues until the two pointers meet.

Finally, return the list of unique quadruplets.

## Complexity Analysis

- **Time Complexity**: \(O(n^3)\) due to sorting and the two-pointer approach within nested loops.
- **Space Complexity**: \(O(1)\) additional space, not counting the space required for the output list.

This approach ensures that we efficiently find all unique quadruplets whose sum equals the target by leveraging sorting and the two-pointer technique.
