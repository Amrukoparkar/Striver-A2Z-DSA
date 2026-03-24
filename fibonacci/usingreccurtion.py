print(0)
print(1)
count = 2

def fibonacci(a, b):
    global count
    if count <= 19:
        c= a + b
        print(c)
        b = a
        a = c
        count += 1
        fibonacci(a, b)
    else:
        return

fibonacci(1,0)