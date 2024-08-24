class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        min_len = min(len(word1), len(word2))

        res = ''.join(word1[i]+word2[i] for i in range(min_len))
        res += word1[min_len:] + word2[min_len:]

        return res