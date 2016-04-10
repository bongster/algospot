"""
    ING
"""
def get_origin_list(string, max_length, result):
    if len(string) == max_length:
        result.append(string)
        return
    
    for s in 'GL':
        get_origin_list(string + s, max_length, result)

def k_n_c(origin, string, k, c, step=1):
    if c == step:
        return string
    
    convert_string = ''
    for s in string:
        if s == 'G':
            convert_string +='G' * k
        else:
            convert_string += origin
    
    return k_n_c(origin, convert_string, k, c, step + 1)

def solve(l, k, c):
    pass
    
def main():
    t = int(raw_input())
    for idx in range(1, t+1):
        k, c, s = map(lambda x: int(x), raw_input().split(' '))
        guess_origins = []
        get_origin_list('', k, guess_origins)
        knc_list = []
        
        if k == 1:
            print 'Case #{0}: {1}'.format(idx, 1 if s >= 1 else 'IMPOSSIBLE')
        elif k == 2 and c == 1 and s != 2:
            print 'Case #{0}: {1}'.format(idx, 'IMPOSSIBLE')
        else:
            for origin in guess_origins:
                knc_list.append(k_n_c(origin, origin, k, c))
            solve(knc_list)

if __name__ == '__main__':
    main()
