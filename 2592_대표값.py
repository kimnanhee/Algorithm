'''
2592번 대표값

열 개의 자연수가 주어질 때 이들의 평균과 최빈값을 구하는 프로그램을 작성하시오.

첫째 줄부터 열 번째 줄까지 한 줄에 하나씩 자연수가 주어진다.
주어지는 자연수는 1,000 보다 작은 10의 배수이다.

첫째 줄에는 평균을 출력하고, 둘째 줄에는 최빈값을 출력한다.
최빈값이 둘 이상일 경우 그 중 하나만 출력한다.
평균과 최빈값은 모두 자연수이다.
'''
arr = {}

for _ in range(10):
    a = int(input())
    if a in arr:
        arr[a] += 1
    else:
        arr[a] = 1

arr = sorted(arr.items(), key=lambda x: x[1], reverse=True)

print(sum(i[0]*i[1] for i in arr)//10)
print(arr[0][0])