'''
10866번 덱

정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
명령은 총 여덟 가지이다.
push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력
size: 덱에 들어있는 정수의 개수를 출력
empty: 덱이 비어있으면 1, 아니면 0을 출력
front: 덱의 가장 앞에 있는 정수를 출력 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력
back: 덱의 가장 뒤에 있는 정수를 출력 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력
'''
from collections import deque
import sys
input = sys.stdin.readline

deq = deque()

for _ in range(int(input())):
    com = input().split()

    if com[0]=="push_front":
        deq.appendleft(com[1])

    elif com[0]=="push_back":
        deq.append(com[1])

    elif com[0]=="pop_front":
        print(deq.popleft() if len(deq)>0 else "-1")

    elif com[0]=="pop_back":
        print(deq.pop() if len(deq)>0 else "-1")

    elif com[0]=="size":
        print(len(deq))

    elif com[0]=="empty":
        print("1" if len(deq)==0 else "0")

    elif com[0]=="front":
        print(deq[0] if len(deq) else "-1")

    elif com[0]=="back":
        print(deq[-1] if len(deq) else "-1")