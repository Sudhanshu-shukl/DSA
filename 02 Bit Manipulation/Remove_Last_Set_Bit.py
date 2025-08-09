#Remove the Last Set Bit - 
num = int(input("Value : "))
mask = num & (num-1)

print(f"After removing the Least Significant Set Bit {num} becomes {mask}")
