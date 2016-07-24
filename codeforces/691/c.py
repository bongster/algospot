def solve(num, under_1=True):
    def sem_p(num, notation=0):
        if num < 10:
            return '{}E{}'.format(int(num) if num % 1 == 0 else num, notation)
        else:
            return sem_p(num / 10, notation + 1)
    
    def sem_n(num, notation=0):
        if num >= 1:
            return '{}E{}'.format(int(num) if num % 1 == 0 else num, notation)
        else:
            return sem_n(num * 10, notation - 1)
    
    if num > 1 and num < 10:
        return a
    elif num > 10:
        return sem_p(num)
    else:
        return sem_n(num)

a = float(input())

print(solve(a, a < 1))