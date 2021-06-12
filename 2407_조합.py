'''
nCm을 출력한다.

n과 m이 주어진다. (5 ≤ n ≤ 100, 5 ≤ m ≤ 100, m ≤ n)
'''
arr = [0]

pac = 1
for i in range(1, 101):
    pac *= i
    arr.append(pac)

n, m = input().split(" ")
n = int(n)
m = int(m)
print(arr[n] // (arr[n-m] * arr[m]))