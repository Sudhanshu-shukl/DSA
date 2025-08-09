a = int(input("Enter :"))
k= int(input("Enter K: "))
def SetBitOrNot(a,k):
    if a==0:
        print("Not so smart are you")
        return
    mask = 1<<k
    return a & mask # if 1 then set bit otherwise if 0 then not set bit


if SetBitOrNot(a,k):
    print("Set Bit")
else:
    print("Not a set bit init")