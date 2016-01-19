import math

n, m = map(float, raw_input().split())

ans = 0
idx = 1
while idx <= m:
    ans += n % idx
    idx += 1

print int(ans % math.pow(10, 9))
