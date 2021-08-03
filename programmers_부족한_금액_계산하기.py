print("부족한 금액 계산하기")

def solution(price, money, count):
    return abs(min(money-price*(count*(count+1)//2), 0))

def solution(price, money, count):
    for i in range(1, count+1):
        money -= price * i

    if money < 0:
        return money * (-1)
    else:
        return 0

result = solution(3, 20, 4)
print(result)