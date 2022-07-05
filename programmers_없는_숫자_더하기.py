print("없는 숫자 더하기")

def solution(numbers):
    answer = sum([i for i in range(10) if i not in numbers])
    answer = 45 - sum(numbers)
    return answer

result = solution([1,2,3,4,6,7,8,0])
print(result)