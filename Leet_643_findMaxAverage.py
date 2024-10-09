class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        max_sum = now_sum = sum(nums[:k])
        
        for i in range(len(nums)-k):
            now_sum = now_sum - nums[i] + nums[i+k] # 현재 슬라이드 값 계산

            max_sum = max(max_sum, now_sum) # 최대 값과 현재 값 비교

        return max_sum/k