n, m = map(int, raw_input().split())
a = []

choose = []
for x in range(n):
    a.append(map(int, raw_input().split()))
    choose.append(min(a[x]))

print max(choose)
