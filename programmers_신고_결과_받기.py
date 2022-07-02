print("신고 결과 받기")

from collections import Counter

def solution(id_list, report, k):
    dict = {}  # 유저별 신고한 이름 딕셔너리
    check = [] # 신고된 유저 이름 리스트
    
    for id in id_list:
        dict[id] = [] # 딕셔너리 초기화
    
    for repo in report:
        repo = repo.split()
        if not repo[1] in dict[repo[0]]:
            dict[repo[0]].append(repo[1])
            check.append(repo[1])
    
    check_counter = Counter(check) # 유저가 몇번이나 신고되었는지 count
    
    answer = []
    
    for id in id_list:
        answer.append(len([dic for dic in dict[id] if check_counter[dic] >= k])) # 유저 별 신고한 딕셔너리에서 신고된 유저의 수
    
    return answer

result = solution(
    ["muzi", "frodo", "apeach", "neo"],
    ["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"],
    2
)
print(result)