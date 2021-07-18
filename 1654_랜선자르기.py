'''
1654번 랜선 자르기

첫째 줄에는 오영식이 이미 가지고 있는 랜선의 개수 K, 그리고 필요한 랜선의 개수 N이 입력된다.
K는 1이상 10,000이하의 정수이고, N은 1이상 1,000,000이하의 정수이다.
그리고 항상 K ≦ N 이다.
그 후 K줄에 걸쳐 이미 가지고 있는 각 랜선의 길이가 센티미터 단위의 정수로 입력된다.
랜선의 길이는 231-1보다 작거나 같은 자연수이다.

첫째 줄에 N개를 만들 수 있는 랜선의 최대 길이를 센티미터 단위의 정수로 출력한다.
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