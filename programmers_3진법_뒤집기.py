print("3진법 뒤집기")

def solution(n):
    arr = []
    while n:
        arr.append(n%3)
        n //= 3
    arr.reverse()

    result = 0
    for i, value in enumerate(arr):
        result += 3**i * value

    return result

result = solution(45)
print(result)