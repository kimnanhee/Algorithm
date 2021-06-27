'''
3040번 백설 공주와 일곱 난쟁이

어느 날 광산에서 아홉 난쟁이가 돌아왔다. 
(왜 그리고 어떻게 아홉 난쟁이가 돌아왔는지는 아무도 모른다) 아홉 난쟁이는 각각 자신이 백설공주의 일곱 난쟁이라고 우기고 있다.
백설공주는 이런 일이 생길 것을 대비해서, 난쟁이가 쓰고 다니는 모자에 100보다 작은 양의 정수를 적어 놓았다. 
따라서, 일곱 난쟁이의 모자에 쓰여 있는 숫자의 합이 100이 되도록 적어 놓았다.
아홉 난쟁이의 모자에 쓰여 있는 수가 주어졌을 때, 일곱 난쟁이를 찾는 프로그램을 작성하시오. 
(아홉 개의 수 중 합이 100이 되는 일곱 개의 수를 찾으시오)
'''
arr = [int(input()) for _ in range(9)]
arr_sum = sum(arr) - 100
end = False

for i in range(0, 8):
    if end: break
    for j in range(i+1, 9):
        if arr[i]+arr[j] == arr_sum:
            arr.pop(j)
            arr.pop(i)
            end = True
            break

for value in arr:
    print(value)