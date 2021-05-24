max = 0

for i in range(999, 100, -1):
    for j in range(i, 100, -1):
        arr = list(str(i*j))
        brr = list(reversed(arr))
        if(arr==brr and i*j>max):
            max = i*j

print(max)