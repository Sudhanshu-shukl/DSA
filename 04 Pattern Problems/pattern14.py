# A B C D E
# B C D E
# C D E
# D E 
# E
n = int(input("n = "))
start = 65
for i in range(1,n+1): # 1 2 3 4 5
    for j in range(n-i+1):
        print(chr(start),end=" ")
        start+=1
    start = 65+i
    print()


# 1 -> 5   (n-i+1)
# 2 -> 4   (n-i+1)
# 3 -> 3
# 4 -> 2
# 5 -> 1




