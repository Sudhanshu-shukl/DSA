n = int(input("Value : "))
k = int(input("Index : "))
mask = 1<<k
print(f"After Bit is Toggled it became : {mask^n}")
