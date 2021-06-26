'''
10156번 과자
'''

arr = input().split(" ")

for i in range(len(arr)):
    arr[i] = int(arr[i])

value = arr[0]*arr[1]-arr[2]
print(value if value > 0 else 0)