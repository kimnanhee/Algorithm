class Solution:
    def isValid(self, s: str) -> bool:
        arr = []
        bracket = {')':'(', '}':'{', ']':'['}

        for i in s:
            if i in bracket.values():
                arr.append(i)
            else:
                if arr and bracket[i] == arr[-1]:
                    arr.pop()
                else:
                    return False

        return False if arr else True