# Code Explanation

## Problem Statement
We are given an array of integers where each element represents the height of the walls of a container. We need to return the maximum amount of water that can be stored within these walls.

## Intuition
The amount of water stored between two walls is determined by the shorter wall because water cannot go higher than the shortest wall. The amount of water is equal to the minimum height of the two walls multiplied by the distance between the walls.

## Algorithm
1. **Initialize Two Pointers**:
   - Set pointer `i` at the start of the array (0 index).
   - Set pointer `j` at the end of the array (last index).

2. **Loop Through the Array**:
   - While `i` is smaller than `j`, calculate the area of water that can be stored between the walls at indices `i` and `j`:
     - `area = min(height[i], height[j]) * (j - i)`
   - Keep track of the maximum area:
     - `max_area = max(max_area, area)`
   - Move the pointer pointing to the shorter wall to try and find a potentially taller wall:
     - If `height[i]` is less than `height[j]`, increment `i` to move the left pointer to the right.
     - Otherwise, decrement `j` to move the right pointer to the left.

3. **Return the Maximum Area**:
   - The value of `max_area` at the end of the loop will be the maximum amount of water that can be stored.


## Complexity Analysis

- **Time Complexity**: O(N), where N is the number of elements in the array. This is because we only traverse the array once using the two pointers.
- **Space Complexity**: O(1), since we are using a constant amount of extra space.

## Dry Run

Given the array:
```
[1, 8, 6, 2, 5, 4, 8, 3, 7]
```

1. **Initialize Two Pointers**:
   - `i = 0`, `j = 8`
   - `max_area = 0`

2. **Loop Through the Array**:
   - `area = min(1, 7) * (8 - 0) = 7`
   - `max_area = max(0, 7) = 7`
   - Move `i` since `height[i] < height[j]`
   
   - `i = 1`, `j = 8`
   - `area = min(8, 7) * (8 - 1) = 49`
   - `max_area = max(7, 49) = 49`
   - Move `j` since `height[i] >= height[j]`
   
   - Continue the process...

3. **Return the Maximum Area**:
   - The final maximum area is `49`.
