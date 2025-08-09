# WAP to find even or odd using Bit no %

def isodd(a):
    return (a&1) # if it is 1 then odd, if 0 then even

a = int(input("Enter a num : "))
if isodd(a):
    print(f"{a} is odd")
else:
    print(f"{a} is even")

