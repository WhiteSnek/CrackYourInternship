# Code Explanation

## Problem Statement
We are given an array of elements in the range `[1, n]` where `n` is the length of the array. We have to return an array of all the duplicate elements present in the given array.

## Intuition
Since the elements are in the given range, we can manipulate the indices without worrying about array overflow. This allows us to mark the elements as visited by making them negative.

## Algorithm

1. **Initialize the Answer Array**:
   - Create an empty array `ans` to store the duplicate elements.

2. **Iterate Through the Array**:
   - For each element `nums[i]` in the array:
     - Compute the index `index` as the absolute value of `nums[i]` minus 1.
     - Check if the element at `nums[index]` is negative:
       - If it is, it means the element at this index has been visited before, so we push `index + 1` to the `ans` array.
       - Otherwise, set the value of `nums[index]` to its negative to mark it as visited.

3. **Return the Answer Array**:
   - Return the `ans` array containing all the duplicates.


## Complexity Analysis

- **Time Complexity**: O(N), where N is the number of elements in the array. This is because we iterate through the array once.
- **Space Complexity**: O(1), since we are using the input array itself for marking the visited elements and only a constant amount of extra space for the answer array (excluding the space for the output).

## Dry Run

Given the array:
```
[4, 3, 2, 7, 8, 2, 3, 1]
```

1. **Initialize the Answer Array**:
   - `ans = []`

2. **Iterate Through the Array**:
   - `i = 0`, `index = 4 - 1 = 3`, `nums = [4, 3, 2, -7, 8, 2, 3, 1]`
   - `i = 1`, `index = 3 - 1 = 2`, `nums = [4, 3, -2, -7, 8, 2, 3, 1]`
   - `i = 2`, `index = 2 - 1 = 1`, `nums = [4, -3, -2, -7, 8, 2, 3, 1]`
   - `i = 3`, `index = 7 - 1 = 6`, `nums = [4, -3, -2, -7, 8, 2, -3, 1]`
   - `i = 4`, `index = 8 - 1 = 7`, `nums = [4, -3, -2, -7, 8, 2, -3, -1]`
   - `i = 5`, `index = 2 - 1 = 1`, `nums[index] < 0` (duplicate found), `ans = [2]`
   - `i = 6`, `index = 3 - 1 = 2`, `nums[index] < 0` (duplicate found), `ans = [2, 3]`
   - `i = 7`, `index = 1 - 1 = 0`, `nums = [-4, -3, -2, -7, 8, 2, -3, -1]`

3. **Return the Answer Array**:
   - The final answer array is `[2, 3]`.