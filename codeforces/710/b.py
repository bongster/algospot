def main():
    num_of_list = int(input())
    ele_of_list = map(lambda x: int(x), input().split())
    l = 0
    r = num_of_list
    ans = 0
    ans_sum = 100000000
    while l <= r:
        mid = (l + r) / 2
        sum_of_distance = reduce(lambda x, y: x + abs(mid - y), lists, 0)
        if sum_of_distance < ans_sum:
            ans = mid
            ans_sum = sum_of_distance
            r = mid




if __name__ == '__main__':
    main()