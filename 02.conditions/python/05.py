a, b, c = map(float, input().split())  # float(input_i())

delta = b ** 2 - 4 * a * c

if delta > 0:
    print("Two Unique Roots")
elif delta == 0:
    print("Double Root")
else:
    print("No Real Root")
