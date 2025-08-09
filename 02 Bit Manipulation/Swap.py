def new_func():
    a = 12
    b = 6
    print("Before Swap" ,a,b)
    a ^= b
    b = a ^ b
    a ^= b
    print("After Swap" ,a,b)

new_func()