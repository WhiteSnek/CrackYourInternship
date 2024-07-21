# Code Explanation

## Problem Statement

We are given an array of integers and a target value. We need to return the indices of the two elements in the array whose sum is equal to the target.

## Intuition

To solve this problem efficiently, we can use a hashmap (or dictionary) to keep track of the elements we have seen so far and their indices. This allows us to quickly check if the complement of the current element (i.e., the value needed to reach the target sum) has already been encountered.

## Algorithm

1. **Initialize a Hashmap**:
   - The hashmap will store the array elements as keys and their corresponding indices as values.

2. **Loop Through the Array**:
   - For each element in the array, calculate its complement by subtracting the element from the target.
   - Check if the complement is present in the hashmap:
     - If it is present, return the indices of the complement and the current element.
     - If it is not present, add the current element and its index to the hashmap.

3. **Return the Result**:
   - Return the indices as a vector (or list).

## Complexity Analysis

- **Time Complexity**: O(N), where N is the number of elements in the array. This is because we loop through the array once, and each lookup or insertion operation in the hashmap takes O(1) time.
- **Space Complexity**: O(N), as we are storing each element of the array in the hashmap.
