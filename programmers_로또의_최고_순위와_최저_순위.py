print("로또의 최고 순위와 최저 순위")

def solution(lottos, win_nums):
    answer = [7, 7]

    for lotto in lottos:
        if lotto == 0:
            answer[0] -= 1
        elif lotto in win_nums:
            answer[0] -= 1
            answer[1] -= 1

    if answer[0] == 7: answer[0] = 6
    if answer[1] == 7: answer[1] = 6

    return answer

result = solution([44, 1, 0, 0, 31, 25], [31, 10, 45, 1, 6, 19])
print(result)