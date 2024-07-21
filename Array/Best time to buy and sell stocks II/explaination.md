# Code Explanation

## Problem Statement

We are given an array of stock prices where the i-th element represents the price of a given stock on day i. We are allowed to buy and sell multiple times, but we must sell the stock before we buy again. Our goal is to return the maximum profit we can achieve.

## Intuition

Unlike the single transaction problem, here we are allowed to make as many transactions as we want. To maximize the profit, we should buy the stock whenever there is an opportunity to sell it at a higher price in the future. Essentially, this means we should add up all the profitable differences between consecutive days.

## Algorithm

1. **Initialize a Variable for Profit**:
   - Initialize a variable `profit` to store the cumulative profit.

2. **Loop Through the Array**:
   - Iterate through the array from the second element to the end.
   - For each element, check if it is greater than the previous element.
   - If it is, add the difference between the current element and the previous element to `profit`.

3. **Return the Profit**:
   - Return the cumulative profit.

## Complexity Analysis

- **Time Complexity**: O(N), where N is the number of days. This is because we iterate through the array once.
- **Space Complexity**: O(1), as we are using a constant amount of extra space.
