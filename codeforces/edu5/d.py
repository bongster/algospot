n, k = map(int, raw_input().split())
a = raw_input().split()

d = [0] * n

d[0] = 1

for idx in range(1, n):
    for x in range(idx):
        if a[x] <= a[idx] and d[x] >= d[idx]:
            d[idx] = d[x] + 1

print d
