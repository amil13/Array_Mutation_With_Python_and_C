# Array_Mutation-With-py-and-C

This is a demonstration of coding skills for languages C and Python.

## Problem Statement
Given an integer n and an array a of length n, your task is to apply the following mutation to a:
Array *a* mutates into a new array *b* of length *n*.
For each i from 0 to n - 1, b[i] = a[i - 1] + a[i] + a[i + 1].
If some element in the sum a[i - 1] + a[i] + a[i + 1] does not exist, 
it should be set to 0. For example, b[0] should be equal to 0 + a[0] + a[1].


### Example

For n = 5 and a = [4, 0, 1, -2, 3], the output should be mutate the array (a).

b[0] = 0 + a[0] + a[1] = 0 + 4 + 0 = 4

b[1] = a[0] + a[1] + a[2] = 4 + 0 + 1 = 5

b[2] = a[1] + a[2] + a[3] = 0 + 1 + (-2) = -1

b[3] = a[2] + a[3] + a[4] = 1 + (-2) + 3 = 2

b[4] = a[3] + a[4] + 0 = (-2) + 3 + 0 = 1

So, the resulting array after the mutation will be [4, 5, -1, 2, 1].


### Guaranteed constraints:
* 1 ≤ length_of_array ≤ 103.
* a.length == n
* -103 ≤ a[i] ≤ 103.

[^1]: Where a is the user input array.
------
# Solution

Both the implementations have the following features:

* Take user input for length of array *(n)* and array elements *(a[i])*
* Check the user inputs against the guaranteed conditions
* Mutate the array as required and output it
* Repeat

----
