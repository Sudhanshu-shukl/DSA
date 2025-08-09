# *         *
# **       **
# ***     ***
# ****   ****
# ***** *****
# ****   ****
# ***     ***
# **       **
# *         * 

n = 5
def upper(n):
    for i in range(1,n+1): # 1 2 3 4 5
        for j in range(i):
            print("*",end="")
        for j in range((2*(n-i))-1,-1,-1):
            print(" ",end="")
        for j in range(i):
            print("*",end="")
        print()

def lower(n):
    for i in range(n-1,0,-1): # 1 
        for j in range(i):
            print("*",end="")
        for j in range((2*(n-i))-1,-1,-1):
            print(" ",end="")
        for j in range(i):
            print("*",end="")
        print()

upper(n)
lower(n)


