# Code Explanation

## Dutch National Flag Algorithm

The Dutch National Flag algorithm is primarily used to sort arrays consisting of three distinct numbers. This algorithm efficiently sorts such arrays in linear time.

Read more about it [here](https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/).

## Algorithm

We use three pointers: `start`, `mid`, and `end`:
- `start` and `mid` are initialized to 0.
- `end` is initialized to the last index of the array.

### Steps:

1. **Initialize Pointers**:
   - Set `start` and `mid` to 0.
   - Set `end` to the last index of the array.

2. **Processing the Array**:
   - Run a `while` loop to check if `mid` is not greater than `end`.

3. **Check Value at `mid`**:
   - If the value at `mid` is 0:
     - Swap it with the value at `start`.
     - Increment both `mid` and `start` pointers.
   - If the value at `mid` is 2:
     - Swap it with the value at `end`.
     - Decrement the `end` pointer.
   - If the value at `mid` is 1:
     - Simply increment the `mid` pointer.

And it's that simple!
