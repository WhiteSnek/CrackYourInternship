# Code Explanation

## Problem Statement

We are given an array containing both negative and non-negative integers and a value `k`. We have to return the count of all the subarrays whose sum is divisible by `k`.

## Intuition

We can use the prefix sum concept for this problem. Instead of searching for the prefix sum directly, we search for the remainder of the prefix sum when divided by `k`.

## Algorithm

1. **Initialize Variables**:
   - `prefix_sum` to keep track of the cumulative sum of elements.
   - `ans` to store the count of subarrays whose sum is divisible by `k`.
   - `remainder_count` as a hashmap to store the count of each remainder value.

2. **Add Initial Entry to Hashmap**:
   - Add an entry with a remainder of `0` and a count of `1` to the hashmap. This indicates that the remainder of the prefix sum before the first element is `0`.

3. **Iterate Through the Array**:
   - For each element in the array:
     - Add the element to `prefix_sum`.
     - Compute the remainder of `prefix_sum` when divided by `k`.
     - If the remainder is negative, adjust it by adding `k` (to handle negative numbers).
     - Check if the remainder is present in the hashmap:
       - If present, add the count of that remainder to `ans`.
       - Update the count of the remainder in the hashmap.

4. **Return the Answer**:
   - Return the final count of subarrays stored in `ans`.


## Complexity Analysis

- **Time Complexity**: O(N), where N is the number of elements in the array. This is because we iterate through the array once.
- **Space Complexity**: O(K), where K is the number of possible remainders (from 0 to k-1), as we are storing counts of remainders in the hashmap.

## Dry Run

Given the array:
```
[4, 5, 0, -2, -3, 1]
```
And `k = 5`.

1. **Initialize Variables**:
   - `prefix_sum = 0`
   - `ans = 0`
   - `remainder_count = {0: 1}`

2. **Iterate Through the Array**:
   - `num = 4`, `prefix_sum = 4`, `remainder = 4 % 5 = 4`
     - `remainder_count = {0: 1, 4: 1}`
   - `num = 5`, `prefix_sum = 9`, `remainder = 9 % 5 = 4`
     - `ans = 1` (remainder 4 found once before)
     - `remainder_count = {0: 1, 4: 2}`
   - `num = 0`, `prefix_sum = 9`, `remainder = 9 % 5 = 4`
     - `ans = 3` (remainder 4 found twice before)
     - `remainder_count = {0: 1, 4: 3}`
   - `num = -2`, `prefix_sum = 7`, `remainder = 7 % 5 = 2`
     - `remainder_count = {0: 1, 4: 3, 2: 1}`
   - `num = -3`, `prefix_sum = 4`, `remainder = 4 % 5 = 4`
     - `ans = 6` (remainder 4 found three times before)
     - `remainder_count = {0: 1, 4: 4, 2: 1}`
   - `num = 1`, `prefix_sum = 5`, `remainder = 5 % 5 = 0`
     - `ans = 7` (remainder 0 found once before)
     - `remainder_count = {0: 2, 4: 4, 2: 1}`

3. **Return the Answer**:
   - The total count of subarrays is `7`.

---

Feel free to adjust or add any details as needed!