# Assignment 2 Analysis - Levi P

## Algorithm 1

Big-Oh = O(n²)
This algorithm picks random numbers and checks each one in the array using a search. Each search can take up to n steps, so total work grows roughly with n².

## Algorithm 2

Big-Oh = O(n)
This algorithm 2 uses a boolean array to track used numbers. Checking and updating the array takes constant time, so total work grows linearly with n.

## Algorithm 3

big-Oh = O(n)
This algorithm  fills the array sequentially and then shuffles it. Both steps take linear time, so total work is O(n).