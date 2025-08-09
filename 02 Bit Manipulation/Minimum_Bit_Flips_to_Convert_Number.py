start = int(input("Start: "))
goal = int(input("Goal: "))
a = start^goal
count = 0 
while a:
    a = a & (a-1)
    count+=1

print(f"Minimum Bits to Flip = {count}")
