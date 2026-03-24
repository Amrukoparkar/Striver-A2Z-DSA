
a=int(input("enetr the 1st value"))
b=int(input("enetr the 2st value"))
c=int(input("enetr how long the seris you want"))
print(a)
print(b)
count = 2
def fibonacci(a, b):
 global count
 if count <= c:
        d= a + b
        print(d)
        b = a
        a = d
        count += 1
        fibonacci(a, b)
 else:
        return

fibonacci(a,b)

