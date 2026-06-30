# Codeforces 1901A - Line Trip

## Problem Summary

A car starts at position 0 and wants to reach position x on a line. There are n gas stations at positions given by the array a.

The goal is to find the minimum tank capacity needed so that the car can:
- move from 0 to the first gas station,
- refuel at stations as needed,
- and finally reach x.

## Key Idea

To make the trip possible, the tank capacity must be at least the largest required distance between consecutive important points.

We consider these points:
- 0
- all gas station positions
- x

For each consecutive pair of points, we compute the distance between them.
The answer is the maximum of these required distances, with the final segment handled specially according to the problem's rule.

## Approach

1. Insert 0 at the beginning and x at the end of the station list.
2. Compute the gaps between consecutive positions.
3. Take the maximum gap as the minimum required tank capacity.

## Complexity

- Time: O(n)
- Space: O(n)

## Reference Solution

The C++ solution is implemented in [A_Line_Trip.cpp](A_Line_Trip.cpp).
