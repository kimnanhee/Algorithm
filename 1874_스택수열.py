from operator import index


"""
1874번 스택 수열

1부터 n까지의 수를 스택에 넣었다가 뽑아 늘어놓음으로써, 하나의 수열을 만들 수 있다.
이때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자.
임의의 수열이 주어졌을 때 스택을 이용해 그 수열을 만들 수 있는지 없는지,
있다면 어떤 순서로 push와 pop 연산을 수행해야 하는지를 알아낼 수 있다.
이를 계산하는 프로그램을 작성하라.

입력된 수열을 만들기 위해 필요한 연산을 한 줄에 한 개씩 출력한다.
push연산은 +로, pop 연산은 -로 표현하도록 한다.
불가능한 경우 NO를 출력한다.
"""

n = int(input())
arr = [int(input()) for _ in range(n)]
idx = 0

stack = []
res = ''

for i in range(1, n+1):
    stack.append(i)
    res += '+'
    while stack[-1] == arr[idx]:
        stack.pop()
        res += '-'
        idx += 1
        if not stack or idx == n:
            break

if stack:
    print("NO")
else:
    for r in res:
        print(r)