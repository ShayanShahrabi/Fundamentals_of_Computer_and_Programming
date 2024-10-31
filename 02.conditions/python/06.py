a, b, c = map(int, input().split())

sum_angles = a + b + c

if sum_angles == 180:
    if a != 0 and b != 0 and c != 0:
        print("Yes")
    else:
        print("No")
else:
    print("No")
