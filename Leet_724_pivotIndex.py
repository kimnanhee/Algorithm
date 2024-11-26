class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        l_sum, r_sum = sum(nums), 0

        for i in range(len(nums)):
            l_sum -= nums[i] # l_sum에 현재 피봇의 값을 마이너스

            if l_sum == r_sum: # 피봇을 기준으로 왼쪽과 오른쪽의 합이 같은 같은 경우
                return i # 피봇의 인덱스를 return
            
            r_sum += nums[i] # r_sum에 현재 피봇의 값을 플러스

        return -1 # 피봇을 찾지 못한 경우, -1을 return