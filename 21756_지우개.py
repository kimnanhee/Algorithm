'''
21756번 지우개

N개의 칸에 1부터 N까지의 수들이 왼쪽부터 순서대로 저장되어 있다.
또, 각 칸은 왼쪽부터 1부터 N까지 순서대로 번호가 붙어 있다.
즉, 처음에는 각 칸의 번호와 각 칸에 저장된 수가 같다.

(A) 홀수번 칸의 수들을 모두 지운다 (B) 남은 수들을 왼쪽으로 모은다.
N을 입력으로 받아 위의 작업을 진행했을 때 마지막으로 남는 수를 계산하는 프로그램을 작성하라.

'''
arr = [i+1 for i in range(int(input()))]

while len(arr)>1:
    for i in range(0, len(arr), 2):
        del arr[i//2]

print(arr[0])