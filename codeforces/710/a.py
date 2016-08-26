def main():
    c, d = input()
    ans = 0
    if c > 'a' and c < 'h' and d > '1' and d < '8':
        ans = 8
    elif c > 'a' and c < 'h' and (d == '1' or d == '8'):
        ans = 5
    elif (c == 'a' or c == 'h') and d > '1' and d < '8':
        ans = 5
    elif (c == 'a' or c == 'h') and (d == '1' or d == '8'):
        ans = 3

    print(ans)


if __name__ == '__main__':
    main()
