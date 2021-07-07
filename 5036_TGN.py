'''
5036번 TGN

광고 효과가 주어졌을 때, 광고를 해야할지 말아야할지 결정하는 프로그램을 작성하시오.

첫째 줄에 테스트 케이스의 개수 N이 주어진다. 
다음 N개의 줄에는 3개의 정수 r, e, c가 주어진다. 
r은 광고를 하지 않았을 때 수익, e는 광고를 했을 때의 수익, c는 광고 비용이다. 
(-106 ≤ r,e ≤ 106, 0 ≤ c ≤ 106)

각 테스트 케이스에 대해서, 
광고를 해야 하면 "advertise", 
하지 않아야 하면 "do not advertise", 
광고를 해도 수익이 차이가 없다면 "does not matter"를 출력한다.
'''
for _ in range(int(input())):
    arr = input().split(" ")
    arr = list(map(int, arr))

    value = arr[1]-arr[2]-arr[0]

    print("advertise" if value>0 else ("does not matter" if value==0 else "do not advertise"))