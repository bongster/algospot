x = raw_input().lstrip('0')
y = raw_input().lstrip('0')

len_x, len_y = len(x), len(y)

if len_x > len_y:
    y = y.zfill(len_x)
elif len_x < len_y:
    x = x.zfill(len_y)

same = True
for idx in range(len_x):
    if x[idx] > y[idx]:
        same = False
        print '>'
        break
    elif x[idx] < y[idx]:
        same = False
        print '<'
        break

if same:
    print '='
