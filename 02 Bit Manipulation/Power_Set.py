arr = [1,2,3]
n = 3
subsets = 1<<n
res = []
for i in range(subsets): # 0 1 2 3 4 5 6 7
    arr1 = []
    for j in range(n):
        if i & 1<<j:
            arr1.append(arr[j])
    res.append(arr1)

print(res)