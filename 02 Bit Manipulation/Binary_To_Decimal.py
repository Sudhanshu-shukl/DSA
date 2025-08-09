n = input("Value:") #1010
Flag = True
if not n:
    print("Enter Something Bitch!")
    exit()

temp = n
n = n[::-1] #0101
res = 0
num = 1
for b in n:
    if int(b) not in [0,1]:
        Flag = False
        break
    res += (num*int(b))
    num*=2
if Flag:
    print(f"The Decimal of {temp} is {res}")
else:
    print("Invalid Binary Number")

# O(lenth of n) -> Time
# O(1) -> Space

