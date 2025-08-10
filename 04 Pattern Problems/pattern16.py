# **************
# ******  ******
# *****    *****
# ****      ****
# ***        ***
# **          **
# *            *
# *            *
# **          **
# ***        ***
# ****      ****
# *****    *****
# ******  ******
# **************

n = 7
def upper(n):
    for i in range(1,n+1):
        for j in range(n-i+1):
            print("*",end="")
        for j in range(2*(i-1)):
            print(" ",end="")
        for j in range(n-i+1,0,-1):
            print("*",end="")
        print()
def lower(n):
    for i in range(n,0,-1):
        for j in range(n-i+1):
            print("*",end="")
        for j in range(2*(i-1)):
            print(" ",end="")
        for j in range(n-i+1,0,-1):
            print("*",end="")
        print()

upper(n)
lower(n)


