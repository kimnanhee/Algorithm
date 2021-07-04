'''
7568번 덩치
'''
arr = [] # [weight, height, rank]

N = int(input())

for _ in range(N): # 키와 몸무게 입력받기
    value = input().split(" ")
    value = list(map(int, value)) # 문자열을 숫자로 변환
    value.append(1)
    arr.append(value)

for i in range(N): # 덩치 계산하기
    for j in range(N):
        if arr[i][0] > arr[j][0] and arr[i][1] > arr[j][1]:
            arr[j][2] += 1

for i in range(N): # 덩치 등수 출력하기
    print(arr[i][2], end=" ")