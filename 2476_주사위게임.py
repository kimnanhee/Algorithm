'''
2476번 주사위 게임

1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.
같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
N(2 ≤ N ≤ 1,000)명이 주사위 게임에 참여하였을 때, 가장 많은 상금을 받은 사람의 상금을 출력하는 프로그램을 작성하시오.

첫째 줄에는 참여하는 사람 수 N이 주어지고 그 다음 줄부터 N개의 줄에 사람들이 주사위를 던진 3개의 눈이 빈칸을 사이에 두고 각각 주어진다. 
'''
max_score = 0

N = int(input())
for _ in range(N):
    arr = input().split(" ")
    arr = list(map(int, arr))

    if arr[0]==arr[1]==arr[2]:
        score = 10000 + arr[0]*1000
    elif arr[0]==arr[1] or arr[0]==arr[2]:
        score = 1000 + arr[0]*100
    elif arr[1]==arr[2]:
        score = 1000 + arr[1]*100
    else:
        score = max(arr)*100

    if score > max_score:
        max_score = score

print(max_score)