class Solution:
    def canPlaceFlowers(self, flowerbed: list[int], n: int) -> bool:
        cnt = 0

        for i in range(len(flowerbed)):
            if not flowerbed[i]: # 0
                left = i==0 or not flowerbed[i-1]
                right = i==len(flowerbed)-1 or not flowerbed[i+1]

                if left and right:
                    flowerbed[i] = 1
                    cnt += 1

        return cnt >= n