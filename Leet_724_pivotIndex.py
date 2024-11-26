class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        l_sum, r_sum = sum(nums), 0

        for i in range(len(nums)):
            l_sum -= nums[i]

            if l_sum == r_sum:
                return i
            
            r_sum += nums[i]

        return -1