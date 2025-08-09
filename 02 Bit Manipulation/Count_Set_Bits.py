a = int(input("Value: "))

def CountSetBit(a):
    count = 0
    while a:
        a = a & (a-1)
        count+=1
    return count

print("No. of Set bits : ", CountSetBit(a))