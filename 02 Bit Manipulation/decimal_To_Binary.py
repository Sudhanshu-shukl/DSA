n = int(input("Value: "))
res = ""
temp = n
while (temp!=0):
    if (temp%2==1): res="1" + res
    else: res = "0" + res
    temp//=2

print(f"Binary of {n} is {res}")