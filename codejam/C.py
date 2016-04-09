"""
    ING
"""
def get_origin_list(string, max_length, result):
    if len(string) == max_length:
        result.append(string)
        return
    
    for s in 'GL':
        get_origin_list(string + s, max_length, result)
        
def main():
    t = int(raw_input())
    for idx in range(1, t+1):
        k, c, s = raw_input().split(' ')
        print k, c, s
        guess_origins = []
        get_origin_list('', int(k), guess_origins)
        print guess_origins

if __name__ == '__main__':
    main()
