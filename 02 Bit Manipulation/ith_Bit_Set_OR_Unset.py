num = int(input("Value : ")) #13 -> 1101
k = int(input("Which Bit (Counting starts from 0 and right -> left) : ")) 
if (num & (1<<k)) != 0:
    print(f"{num}'s {k} bit is SET")
else:
    print(f"{num}'s {k} bit is UNSET")