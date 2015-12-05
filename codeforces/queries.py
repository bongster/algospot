def bis(l, start, end, n):
    if len(l) == 1:
        if int(l[0]) < n:
            return 1
        else:
            return 0

    if start + 1 == end:
#       print '''start: {}, end: {}, sn: {}, en: {}, \
#       n: {}, check_s: {}, check_e: {}'''.format(
#           start,
#           end,
#           int(l[start]),
#           int(l[end]),
#           n,
#           int(l[start]) <= n,
#           int(l[end]) <= n
#       )
        if int(l[end]) <= n:
            return end + 1
        elif int(l[start]) > n:
            return start
        else:
            return start + 1

    mid = (start + end) / 2

    if int(l[mid]) < n:
        return bis(l, mid, end, n)
    elif int(l[mid]) > n:
        return bis(l, start, mid, n)
    else:
        return mid + 1

n, _ = raw_input().split(' ')
n_list = sorted(map(lambda x: int(x), raw_input().split(' ')))
m_list = raw_input().split(' ')

for m in m_list:
    print bis(n_list, 0, int(n) - 1, int(m))
