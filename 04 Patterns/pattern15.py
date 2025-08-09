# E
# D E 
# C D E
# B C D E
# A B C D E

n = int(input("n = "))
# n = 5
start = 65+n
for i in range(1,n+1): # 1 2 3 4 5
    start = start - i 
    for j in range(i):
        print(chr(start),end=" ")
        start+=1
    print()






# 1 -> 
# 2 -> 
# 3 -> 
# 4 -> 
# 5 -> 