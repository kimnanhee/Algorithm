'''
15688번 수 정렬하기 5

N개의 수가 주어졌을 때, 이를 비내림차순으로 정렬하는 프로그램을 작성하시오.
길이가 K인 수열 A가 A1 ≤ A2 ≤ ... ≤ AK-1 ≤ AK를 만족하면, 비내림차순이라고 한다.

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 
둘째 줄부터 N개의 줄에는 숫자가 주어진다.
이 수는 절댓값이 1,000,000보다 작거나 같은 정수이며, 같은 수가 여러 번 중복될 수도 있다.

첫째 줄부터 N개의 줄에 비내림차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
'''
import sys

arr = []
N = int(sys.stdin.readline())

for _ in range(N):
    arr.append(int(sys.stdin.readline()))

arr.sort()

for i in arr:
    print(i)