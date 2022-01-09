'''
9713번 Sum of Odd Sequence

Given an odd integer N,
calculate the sum of all the odd integers between 1 and N inclusive.

First line of the input contains T, the number of test cases.
Each test case contains a single integer N.
N is between 1 and 100.

For each test case output the value 1+3+….+N.
'''
arr = [1 for _ in range(50)]

for i in range(1, 50):
    arr[i] += arr[i-1] + i*2

for _ in range(int(input())):
    print(arr[int(input())//2])