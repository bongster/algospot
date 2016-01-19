n, m = map(int, raw_input().split())
a = []
d = [[0]* m] * n

choose = []
for x in range(n):
    a.append(raw_input())

def check_adjust(x1, y1):
    if a[x1][y1] == '.':
        return 1
    else:
        return 0

for x in range(n):
    for y in range(m):
        if a[x][y] == '.':
            continue
        if x == 0:
            if y == 0:
                d[x][y] +=check_adjust(x, y + 1)
                d[x][y] +=check_adjust(x + 1, y)
                d[x][y] +=check_adjust(x + 1,y + 1)
            elif y == m - 1:
                d[x][y] +=check_adjust(x, y - 1)
                d[x][y] +=check_adjust(x + 1, y)
                d[x][y] +=check_adjust(x + 1,y - 1)
            else:
                d[x][y] +=check_adjust(x, y - 1)
                d[x][y] +=check_adjust(x,y + 1)
                
                d[x][y] +=check_adjust(x + 1,y - 1)
                d[x][y] +=check_adjust(x + 1, y)
                d[x][y] +=check_adjust(x + 1,y + 1)
        elif x == n - 1:
            if y == 0:
                d[x][y] +=check_adjust(x, y + 1)
                d[x][y] +=check_adjust(x - 1, y)
                d[x][y] +=check_adjust(x - 1, y + 1)
            elif y == m - 1:
                d[x][y] +=check_adjust(x, y - 1)
                d[x][y] +=check_adjust(x - 1, y)
                d[x][y] +=check_adjust(x - 1, y - 1)
            else:
                d[x][y] +=check_adjust(x, y - 1)
                d[x][y] +=check_adjust(x, y + 1)
                
                d[x][y] +=check_adjust(x - 1, y - 1)
                d[x][y] +=check_adjust(x - 1, y)
                d[x][y] +=check_adjust(x - 1, y + 1)
        else:
            if y == 0:
                d[x][y] +=check_adjust(x, y + 1)
                d[x][y] +=check_adjust(x - 1, y)
                d[x][y] +=check_adjust(x - 1, y + 1)
                d[x][y] +=check_adjust(x + 1, y)
                d[x][y] +=check_adjust(x + 1, y + 1)
            elif y == m - 1:
                d[x][y] +=check_adjust(x, y - 1)
                d[x][y] +=check_adjust(x - 1, y)
                d[x][y] +=check_adjust(x - 1, y - 1)
                d[x][y] +=check_adjust(x + 1, y)
                d[x][y] +=check_adjust(x + 1, y - 1)
            else:           
                d[x][y] +=check_adjust(x, y - 1)
                d[x][y] +=check_adjust(x, y + 1)
                
                d[x][y] +=check_adjust(x - 1, y - 1)
                d[x][y] +=check_adjust(x - 1, y)
                d[x][y] +=check_adjust(x - 1, y + 1)
                
                d[x][y] +=check_adjust(x + 1, y - 1)
                d[x][y] +=check_adjust(x + 1, y)
                d[x][y] +=check_adjust(x + 1, y + 1)
        print x, y, d[x][y], d
print d