n = int(input("n = "))
def pattern1(n):
    for i in range(n): # 0 1 2
        for j in range(i): # none then 0(1 times space) then 1(2 times space)
            print("  ",end="")
        for j in range((2*(n-i-1))+1):
            print("#",end=" ")
        print()


def pattern2(n):
    for i in range(n-1):
        for j in range(n-i-1):
            print("  ",end="")
        for j in range(2*i+1):
            print("#",end=" ")
        print()

pattern2(n)
pattern1(n)