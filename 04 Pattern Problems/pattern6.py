# *
# * *
# * * *
# * * * *
# we divide from here
# * * *
# * *
# *

n = 5 # ->3
def fun1(n):
    for i in range(n-1):
        for j in range(i+1):
            print("*",end=" ")
        print()


# n = 5 -> 3 => 3 -> 2 -> 1
def fun2(n):
    for i in range(n-2,0,-1):
        for j in range(i):
            print("*",end=" ")
        print()


fun1(n)
fun2(n)