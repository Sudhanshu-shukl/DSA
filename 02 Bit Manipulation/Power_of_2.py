def PowORnot(a):
    if a<=0:
        return 1
    return (a & (a-1)) # if 1 then not power of 2 else if 0 then power of 2

a = int(input("Enter : "))
if PowORnot(a):
    print("Not Power of 2")
else:
    print("Power of 2")