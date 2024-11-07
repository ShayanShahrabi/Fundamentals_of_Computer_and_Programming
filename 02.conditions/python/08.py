c_m, g_m = map(int, input().split()) 
c_s, g_s = map(int, input().split())
rate = int(input())

if c_m + g_m * rate >= c_s + g_s * rate:
    print("Yes")
else:
    print("No")
