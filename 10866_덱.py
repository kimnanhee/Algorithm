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