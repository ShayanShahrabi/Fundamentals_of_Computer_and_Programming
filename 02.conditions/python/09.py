n, a, b, c, d = map(int, input().split())

cnt = 0

if n % a == 0:
    cnt += 1
if n % b == 0:
    cnt += 1
if n % c == 0:
    cnt += 1
if n % d == 0:
    cnt += 1

print(cnt)
