print("주식가격")

def solution(prices):
    answer = []

    for i, price in enumerate(prices):
        for j in range(i+1, len(prices)):
            if prices[j] < price:
                break
        answer.append(j-i)

    return answer

result = solution([1, 2, 3, 2, 3])
print(result)