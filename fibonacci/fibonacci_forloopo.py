a = int(input("Enter 1st value of series: "))
b = int(input("Enter 2nd value of series: "))
c = int(input("Enter the range of series: "))

print(a)
print(b)

for d in range(c - 2): 
    e = a + b
    print(e)
    a = b
    b = e
