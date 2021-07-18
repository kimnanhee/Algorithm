'''
1654번 랜선 자르기
'''
import sys
input = sys.stdin.readline

K, N = map(int, input().split())
lan = [int(input()) for _ in range(K)]

start, end = 1, max(lan)

while start <= end:
    mid = (start + end) // 2

    line = 0
    for i in lan:
        line += i // mid

    if line >= N:
        start = mid + 1
    else:
        end = mid - 1

print(end)