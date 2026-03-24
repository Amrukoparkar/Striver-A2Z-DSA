a=int(input("enter the valve of no"))

def F(n):
    if n <= 1:
        return n
    else:
        return F(n - 1) + F(n - 2)

print(F(a))