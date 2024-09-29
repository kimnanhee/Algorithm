class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_candy = max(candies)

        res = [candy+extraCandies >= max_candy for candy in candies]

        return res