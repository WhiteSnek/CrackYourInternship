Sure, here's a detailed explanation in Markdown format.

---

# Finding Triplets with Sum Zero

## Problem Statement

Given an integer array, we need to find all unique triplets `[a, b, c]` such that:
- `a + b + c = 0`
- Each triplet consists of elements with different indices.

## Intuition

The brute-force approach would involve using three nested loops to find all possible combinations of triplets, checking if their sum equals zero. However, this approach has a time complexity of \(O(n^3)\) and can be highly inefficient for large arrays.

To optimize this, we can use a sorting-based approach combined with the two-pointer technique, which reduces the time complexity to \(O(n^2)\).

## Algorithm

1. **Sort the Array**: Sorting helps in easily skipping duplicates and managing the two-pointer approach.
2. **Iterate with a Fixed Pointer**: Loop through the array with an index `i` as the fixed pointer.
3. **Skip Duplicates**: If the current element is the same as the previous one, skip it to avoid duplicate triplets.
4. **Two-Pointer Approach**:
    - Initialize two pointers, `j` (starting from `i + 1`) and `k` (starting from the end of the array).
    - Compute the sum of elements at indices `i`, `j`, and `k`.
    - If the sum is zero, add the triplet to the result and move both pointers while skipping duplicates.
    - If the sum is less than zero, increment `j` to increase the sum.
    - If the sum is greater than zero, decrement `k` to decrease the sum.
5. **Continue Until j < k**: The process continues until the two pointers meet.

Finally, return the list of unique triplets.

## Complexity Analysis

- **Time Complexity**: \(O(n^2)\) due to sorting and the two-pointer approach within a single loop.
- **Space Complexity**: \(O(1)\) additional space, not counting the space required for the output list.

This approach ensures that we efficiently find all unique triplets whose sum is zero by leveraging sorting and the two-pointer technique.
