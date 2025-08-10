# A B C D E
# A B C D
# A B C
# A B
# A



# A -> 65

n = int(input("n = "))


for i in range(1,n+1):  # 1 2 3 4 5
    start = 65
    for j in range(n-i+1):
        print(chr(start),end=" ")
        start+=1
    print()


# 0 -> 5(n-i+1)
# 1 -> 4(n-i+1)
# 2 -> 3(n-i+1)
# 3 -> 2(n-i+1)
# 4 -> 1(n-i+1)