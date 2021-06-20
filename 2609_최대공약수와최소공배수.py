'''
2609번 최대공약수와 최소공배수

두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

첫째 줄에는 두 개의 자연수가 주어진다. 
이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.
'''
def gcb(a, b):
    if b > a:
        a, b = b, a
    while True:
        r = a % b
        if r==0: return b

        a, b = b, r

def lcm(a, b):
    return int(a * b / gcb(a, b))

arr = input().split()
arr[0], arr[1] = int(arr[0]), int(arr[1])

print(gcb(arr[0], arr[1]), lcm(arr[0], arr[1]))