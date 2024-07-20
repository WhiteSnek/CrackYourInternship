# Code explaination

## Intuition

Let's first read the question properly. We are given a sorted array containing duplicates and we have to remove the duplicates in place and return an index such that the subarray before the index doesn't contain any duplicates.

## Algorithm

We will create a variable j and point it to first index

We will then run a for loop from 0 to n
if the previous element is not same as the current element we will set the value of element at j index to the current element and increment j


then we will return j as our answer

## Dry run

[![Dry run](https://i.postimg.cc/BZHxqBmP/Whats-App-Image-2024-07-20-at-10-50-57-PM.jpg)](https://postimg.cc/Jt7yxZVR)