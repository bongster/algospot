'''
    a(n) = a(n -1) * range(n)
'''
T = input()

cashed = [None] * 21


def get_polynomial(k):
    if k == 1:
        return [0, 1]
    else:
        poly = []
        if cashed[k]:
            return cashed[k]

        before = get_polynomial(k - 1)

        for ki in range(k + 1):
            poly.extend(map(lambda x: x + ki, before))
        cashed[k] = poly

        return poly


def solve(k, n):
    if k == 0 or k == n + 1:
        return 1
    poly_list = get_polynomial(k)
    return poly_list.count(n)


for _ in range(T):
    k, n = map(lambda x: int(x), raw_input().split(' '))
    print solve(k, n)

