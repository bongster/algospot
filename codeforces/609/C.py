t = int(raw_input())
a = map(lambda x: int(x), raw_input().split(' '))

avg = sum(a) / t
rem = sum(a) % t

d = [avg] * (t - rem) + [avg + 1] * (rem)

ans = 0
a.sort()
for i in range(t):
    if (d[i] < a[i]):
        ans += a[i] - d[i]

print ans
