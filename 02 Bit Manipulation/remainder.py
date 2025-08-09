a = int(input("Enter number: "))
k = int(input("Enter k : "))

def remainder(a,k):
    return (a & (1<<k)-1)

print("Remainder : ",remainder(a,k))
