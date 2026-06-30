# Codeforces Problem 1903A - Halloumi Boxes

## Problem Description
Theofanis has n boxes, and each box contains a number written on it. He wants to arrange the boxes in non-decreasing order, but his machine can only reverse any subarray whose length is at most k.

A reverse operation means choosing a segment of the array and reversing its order. For example, if we reverse a segment [l, r], the numbers inside that segment are placed in reverse order.

The task is to determine whether it is possible to sort the array using any number of such operations.

## Input
- The first line contains an integer t: the number of test cases.
- For each test case:
  - The first line contains n and k.
  - The second line contains n integers, the values in the boxes.

## Output
For each test case, print:
- YES if the array can be sorted in non-decreasing order.
- NO otherwise.

## Key Observation
- If k = 1, the machine can only perform reversals of length 1, which do nothing. So the array can be sorted only if it is already non-decreasing.
- If k >= 2, the machine can swap adjacent elements (by reversing a subarray of length 2), so any array can be sorted.

## Example
If the array is already sorted, the answer is YES.
If k = 1 and the array is not sorted, the answer is NO.
If k >= 2, the answer is always YES.

## Summary
This problem is a simple observation-based problem:
- Answer is YES for all cases with k >= 2.
- For k = 1, check whether the array is already sorted.
