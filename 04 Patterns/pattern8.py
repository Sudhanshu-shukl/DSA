# 1        1
# 12      21
# 123    321
# 1234  4321
# 1234554321



n = int(input("N = "))


for i in range(1,n+1):
    for j in range(1,i+1):
        print(j,end="")
    for j in range(n-i):
        print("  ",end="")
    for j in range(i,0,-1):
        print(j,end="")
    print()


# 1 -> 1
# 2 -> 21
# 3 -> 321
# 4 -> 4321
# 5 -> 4321

# so its going from i towards 1 in each line so make a loop from i -> 1




