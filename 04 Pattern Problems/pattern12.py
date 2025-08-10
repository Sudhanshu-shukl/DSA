# A
# B B
# C C C
# D D D D
# E E E E E

n = int(input("n = "))

start = 65
for i in range(1,n+1): # 1 2 3 4 5
    for j in range(i):
        print(chr(start),end=" ")
    start+=1
    print()