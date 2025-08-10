# A
# A B
# A B C
# A B C D
# A B C D E

# A -> 65

n = 5

for i in range(n):
    start = 65
    for j in range(i+1):
        print(chr(start),end=" ")
        start+=1
    print()
