n = int(input("Value : "))
k = int(input("Index : "))
mask = 1<<k
print(f"After Bit is Set it became : {mask|n}")
