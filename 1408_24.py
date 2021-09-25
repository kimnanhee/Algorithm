'''
1408번 24

도현이는 모든 사건을 정확하게 24시간이 되는 순간 해결하는 것으로 유명하다.
도현이가 임무를 시작한 시간과, 현재 시간이 주어졌을 때, 도현이에게 남은 시간을 구하는 프로그램을 작성하시오.

첫째 줄에는 현재 시간이, 둘째 줄에는 도현이가 임무를 시작한 시간이 주어진다. 
임무를 시작한 시간과 현재 시간이 같은 경우는 주어지지 않는다.

첫째 줄에 도현이가 임무를 수행하는데 남은 시간을 문제에서 주어지는 시간의 형태 (XX:XX:XX)에 맞춰 출력한다.
'''
now =  list(map(int, input().split(":")))
start = list(map(int, input().split(":")))

for i in range(2, -1, -1):
    print(i)
    if start[i]<now[i]:
        if i==0:
            start[i]+=24
        else:
            start[i-1]-=1
            start[i]+=60
    start[i]-=now[i]

print("{0:02d}:{1:02d}:{2:02d}".format(start[0], start[1], start[2]))