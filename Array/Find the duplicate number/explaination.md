# Code Explanation

## Intuition

First, let's read the question properly and note down what is given:
- We have an array containing `n+1` integers, all in the range `[1, n]`.
- We need to find the duplicate number.

## Brute Force Approach

The brute force approach is to run two loops and check whether a number occurs more than once.

- **Time Complexity**: O(N^2) for two loops

## Better Approach

A better approach is to use a hashmap to store the count of each number and then return the number whose count is greater than 1.

- **Time Complexity**: O(N)
- **Space Complexity**: O(N)

## Best Approach

The best approach is to use the concept of finding a loop in a linked list using Floyd's Cycle Detection Algorithm. You can read about it [here](https://www.geeksforgeeks.org/floyds-cycle-finding-algorithm/).

[![Linked List](https://i.postimg.cc/C1Gq7v8y/Whats-App-Image-2024-07-20-at-9-58-16-PM.jpg)](https://postimg.cc/Q9MCxJSS)

We will treat the array as a linked list:
1. Set both the fast and slow pointers at `nums[0]`.
2. Run a loop moving the slow pointer one step ahead (`slow = nums[slow]`) and the fast pointer two steps ahead (`fast = nums[nums[fast]]`) until they are equal.
3. Set the fast pointer at `nums[0]` to find the starting node of the loop.
4. Run another loop, moving both fast and slow pointers one step ahead until they are equal.
5. Return either fast or slow pointer, which will be our answer.


### Dry run

[![Dry run](https://i.postimg.cc/nrnQPvKX/Whats-App-Image-2024-07-20-at-9-58-15-PM.jpg)](https://postimg.cc/R6bF3JDm)