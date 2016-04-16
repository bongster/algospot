def main():
    t = int(raw_input())
    for i in xrange(1, t+1):
        s = raw_input()
        result = ''
        for si in s:
            front_s = si + result
            back_s = result + si
            
            if front_s > back_s:
                result = front_s
            else:
                result = back_s

        print 'Case #{0}: {1}'.format(i, result)


if __name__ == '__main__':
    main()