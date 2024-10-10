class Solution:
    def decodeString(self, s: str) -> str:
        res = ''
        stack = []
        sudja = 0

        for i in range(len(s)):
            if s[i].isdigit():
                sudja = sudja*10 + int(s[i])

            elif s[i] == '[':
                stack.append([sudja, ''])
                sudja = 0

            elif s[i] == ']':
                v = stack.pop()
                v = v[0] * v[1]

                if stack:
                    stack[-1][1] += v
                else:
                    res += v

            else:
                if stack:
                    stack[-1][1] += s[i]
                else:
                    res += s[i]

        return res


s = Solution()

res = s.decodeString("3[a4[b]]4[cd]ef")
print(res)