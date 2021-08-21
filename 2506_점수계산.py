'''
'''
sum, ga= 0, 0

_ = int(input())
arr = input().split()

for i in arr:
    if i=='1':
        ga+=1
        sum+=ga
    else:
        ga=0

print(sum)