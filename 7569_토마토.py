'''
7569번 토마토

보관 후 하루가 지나면, 익은 토마토들의 인접한 곳에 있는 익지 않은 토마토들은 익은 토마토의 영향을 받아 익게 된다.
하나의 토마토의 인접한 곳은 왼쪽, 오른쪽, 앞, 뒤 네 방향에 있는 토마토를 의미한다.
대각선 방향에 있는 토마토들에게는 영향을 주지 못하며, 토마토가 혼자 저절로 익는 경우는 없다고 가정한다.
철수는 창고에 보관된 토마토들이 며칠이 지나면 다 익게 되는지, 그 최소 일수를 알고 싶어 한다.

첫 줄에는 상자의 크기를 나타내는 두 정수 M,N과 쌓아올려지는 상자의 수를 나타내는 H가 주어진다.
M은 상자의 가로 칸의 수, N은 상자의 세로 칸의 수를 나타낸다.

둘째 줄부터는 가장 밑의 상자부터 가장 위의 상자까지에 저장된 토마토들의 정보가 주어진다. 즉, 둘째 줄부터 N개의 줄에는 하나의 상자에 담긴 토마토의 정보가 주어진다. 각 줄에는 상자 가로줄에 들어있는 토마토들의 상태가 M개의 정수로 주어진다.
정수 1은 익은 토마토, 정수 0 은 익지 않은 토마토, 정수 -1은 토마토가 들어있지 않은 칸을 나타낸다.
이러한 N개의 줄이 H번 반복하여 주어진다.

여러분은 토마토가 모두 익을 때까지의 최소 날짜를 출력해야 한다.
만약, 저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력해야 하고,
토마토가 모두 익지는 못하는 상황이면 -1을 출력해야 한다.
'''
import sys
from collections import deque
input = sys.stdin.readline

def bfs(M, N, H, box):

    dx = [0, 0, 0, 0, 1, -1]
    dy = [0, 0, 1, -1, 0, 0]
    dz = [1, -1, 0, 0, 0, 0]
    
    day = -1
    while arr:
        day += 1
        for _ in range(len(arr)):
            x, y, z = arr.popleft()

            for i in range(6):
                nx = x + dx[i]
                ny = y + dy[i]
                nz = z + dz[i]

                if (0 <= nx < M) and (0 <= ny < N) and (0 <= nz < H) and box[nz][ny][nx]==0:
                    box[nz][ny][nx] = box[z][y][x]+1
                    arr.append([nx, ny, nz])

    for b in box:
        for a in b:
            if 0 in a:
                return -1
    return day

box = []
arr = deque()

M, N, H = map(int, input().split())

for _ in range(H):
    a = []
    for _ in range(N):
        a.append(list(map(int, input().split())))
    box.append(a)

for i in range(M): # x
    for j in range(N): # y
        for k in range(H): # z
            if box[k][j][i]==1:
                arr.append([i, j, k])

print(bfs(M, N, H, box))