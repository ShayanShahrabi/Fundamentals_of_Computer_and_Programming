a = int(input())
b = int(input()) 
c = int(input())

max_a_b = max(a, b)
maximum = max(max_a_b, c)

min_a_b = min(a, b)
minimum = min(min_a_b, c)

middle = (a + b + c) - minimum - maximum

if minimum * minimum + middle * middle == maximum * maximum:
    print("YES")
else:
    print("NO")
