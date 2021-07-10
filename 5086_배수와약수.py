'''
5086번 배수와 약수

두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.
첫 번째 숫자가 두 번째 숫자의 약수이다.
첫 번째 숫자가 두 번째 숫자의 배수이다.
첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.

입력은 여러 테스트 케이스로 이루어져 있다.
각 테스트 케이스는 10,000이 넘지않는 두 자연수로 이루어져 있다.
마지막 줄에는 0이 2개 주어진다. 두 수가 같은 경우는 없다.

각 테스트 케이스마다 첫 번째 숫자가 두 번째 숫자의 약수라면 factor를,
배수라면 multiple을,
둘 다 아니라면 neither를 출력한다.
'''
while True:
    arr = list(map(int, input().split()))
    
    if not (arr[0] and arr[1]):
        break
    
    if arr[0] < arr[1]:
        print("neither") if arr[1]%arr[0] else print("factor")
    else:
        print("neither") if arr[0]%arr[1] else print("multiple")