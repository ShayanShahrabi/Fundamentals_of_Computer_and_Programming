a, b, c = map(float, input().split())

delta = b * b - 4 * a * c

if delta > 0:
    print("Two Unique Roots")
elif delta == 0:
    print("Double Root")
else:
    print("No Real Root")
