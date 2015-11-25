import math

def main():
    '''
        이게 최대 n 값 찾기
        x = n * (2 * a1 + n - 1) / 2
        x = n * (2 * a1 + -(n - 1)) / 2
    '''
    T = int(input())
    for case in range(T):
        num = int(input())
        solve(num, 1, int(math.sqrt(num * 2)))


def solve(num, a1, n):
    #n^2 + (2*a1 +1)*n - (2*num) = 0
    pass


if __name__ == '__main__':
    main()
