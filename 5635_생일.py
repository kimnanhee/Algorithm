'''
5635번 생일

어떤 반에 있는 학생들의 생일이 주어졌을 때, 
가장 나이가 적은 사람과 가장 많은 사람을 구하는 프로그램을 작성하시오.

첫째 줄에 반에 있는 학생의 수 n이 주어진다. (1 ≤ n ≤ 100)
다음 n개 줄에는 각 학생의 이름과 생일이 "이름 dd mm yyyy"와 같은 형식으로 주어진다.
이름은 그 학생의 이름이며, 최대 15글자로 이루어져 있다.
dd mm yyyy는 생일 일, 월, 연도이다. (1990 ≤ yyyy ≤ 2010, 1 ≤ mm ≤ 12, 1 ≤ dd ≤ 31)

첫째 줄에 가장 나이가 적은 사람의 이름, 둘째 줄에 가장 나이가 많은 사람 이름을 출력한다.
'''
data = []

N = int(input())
for _ in range(N):
    arr = input().split()
    arr[1:4] = list(map(int, arr[1:4]))
    data.append(arr[::-1])

data.sort(key=lambda x:(x[0], x[1], x[2]))

print(data[N-1][3])
print(data[0][3])