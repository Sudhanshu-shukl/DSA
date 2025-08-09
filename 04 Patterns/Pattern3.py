#   *   -> 2 space then 1 star then 2 space so [2,1,2]
#  ***  -> [1,3,1]
# ***** -> [0,5,0]


# that means the formula is [n-i-1,2n+1,n-i-1]
# so 3 for loops inside the main i with these values

n = 3

for i in range(n):
    for j in range(n-i-1):
        print("  ",end="")
    for j in range(2*i+1):
        print("*",end=" ")
    # for j in range(n-i-1):   -> this is optional if the testcase asks for it we can have it,
    #     print("  ",end="")      visually there is no difference
    print()
    

