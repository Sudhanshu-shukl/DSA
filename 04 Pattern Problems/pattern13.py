#       A       -> [3 spaces, 1 letter, 0 reverse]
#     A B A     -> [2 spaces, 2 letters, 1 reverse]
#   A B C B A   -> [1 space , 3 letters, 2 reverse]
# A B C D C B A -> [0 space , 4 letters, 3 reverse]
n = int(input("n = "))
# A -> 65 66 67 68
for i in range(1,n+1):  # 1 2 3 4
    start = 65
    for j in range(n-i,0,-1):
        print("  ",end="")
    for j in range(i):
        print(chr(start),end=" ")
        start+=1
    start = 65
    for j in range(i-1,0,-1):
        print(chr(j+start-1),end=" ")
    print()


