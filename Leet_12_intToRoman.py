class Solution:
    def intToRoman(self, num: int) -> str:
        sv = {1000:'M', 900:'CM', 500:'D', 400:'CD', 100:'C', 90:'XC', 50:'L', 40:'XL', 10:'X', 9:'IX', 5:'V', 4:'IV', 1:'I'}
        s = ""
        
        for i in sv.keys():
            if num//i > 0:
                s += sv[i]*(num//i)
                num %= i
                
        return s