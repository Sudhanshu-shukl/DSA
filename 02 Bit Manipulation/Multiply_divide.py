a = int(input("Enter number: "))
k = int(input("Enter k : "))

def Multiply(a,k):
    return a<<k

def divide(a,k):
    return a>>k


print("multiplication : " , Multiply(a,k))
print("Division : " ,divide(a,k))


