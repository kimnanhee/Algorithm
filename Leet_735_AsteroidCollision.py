class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        res = []

        for asteroid in asteroids:
            while res and res[-1] > 0 and asteroid < 0:
                if abs(res[-1]) == abs(asteroid): # 두 운석의 질량이 같을 때 둘 다 폭발
                    res.pop()
                    break
                elif abs(res[-1]) < abs(asteroid): # 부딫힌 운석의 질량이 더 클 떄
                    res.pop()
                    continue
                else: # abs(res[-1]) > abs(asteroid):
                    break

            else: # while 문에 들어가지 않는 경우
                res.append(asteroid)

            # print(res)
            
        return res