class Solution:
    def countCollisions(self, directions: str) -> int:
        directions = list(directions)

        cnt = 0 # 충돌 횟수
        rcnt = 0

        for i in range(1, len(directions)):
            if directions[i-1] == 'R' and directions[i] == 'L':
                directions[i-1] = directions[i] = 'S'
                cnt += (2 + rcnt)
                rcnt = 0
            elif directions[i-1] == 'S' and directions[i] == 'L':
                directions[i] = 'S'
                cnt += 1
            elif directions[i-1] == 'R' and directions[i] == 'S':
                directions[i-1] = 'S'
                cnt += (1 + rcnt)
                rcnt = 0
            elif directions[i-1] == 'R' and directions[i] == 'R':
                rcnt += 1

        return cnt