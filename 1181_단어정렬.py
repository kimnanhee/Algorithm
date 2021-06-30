'''
1181번 단어 정렬

알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
길이가 짧은 것부터
길이가 같으면 사전 순으로

첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000)
둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다.
주어지는 문자열의 길이는 50을 넘지 않는다.
'''
N = int(input())
arr = []

for _ in range(N): # 입력받기
    word = input()
    arr.append((word, len(word)))

arr = list(set(arr)) # 중복 제거하기

arr.sort(key=lambda x: (x[1], x[0])) # 정렬하기

for i in arr: # 출력하기
    print(i[0])