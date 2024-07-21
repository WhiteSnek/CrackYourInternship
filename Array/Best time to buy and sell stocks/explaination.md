# Code Explanation

## Problem Statement

We are given an array where each element represents the price of a stock on that particular day. We need to find the maximum profit we can achieve by buying and selling the stock. Note that we cannot sell a stock before buying it, and we do not want to make a loss.

## Intuition

To solve this problem, we need to keep track of the minimum stock price seen so far and calculate the maximum profit that can be achieved by selling on each day after the minimum price day.

## Algorithm

1. **Initialize Variables**:
   - `mini`: To keep track of the minimum stock price seen so far.
   - `maxi`: To keep track of the maximum profit.

2. **Loop Through the Array**:
   - For each price in the array, update `mini` to be the minimum of `mini` and the current price.
   - Calculate the profit by subtracting the current price from `mini`.
   - Update `maxi` to be the maximum of `maxi` and the calculated profit.

3. **Return `maxi`**: The maximum profit achieved.


## Complexity Analysis

- **Time Complexity**: O(N), where N is the number of elements in the array. We traverse the array once.
- **Space Complexity**: O(1), as we are using a constant amount of extra space.
