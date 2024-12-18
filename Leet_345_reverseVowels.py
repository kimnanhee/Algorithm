class Solution:
    def reverseVowels(self, s: str) -> str:
        start, end = 0, len(s)-1
        s = list(s)
        
        vowels = 'aeiouAEIOU'

        while start < end:
            if s[start] not in vowels:
                start += 1
            elif s[end] not in vowels:
                end -= 1
            else:
                s[start], s[end] = s[end], s[start]
                start += 1
                end -= 1

        return ''.join(s)