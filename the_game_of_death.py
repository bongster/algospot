'''
    when I using tail recursion to solve this problem
    python has a `Runtime error` because python max stack depth is 1000
'''
T = int(input())

for case in range(T):
    number_of_members = int(input())
    to_list = [int(input()) - 1 for me in range(int(number_of_members))]

    used = [0] * number_of_members
    next = to_list[0]
    used[0] = 1
    count = 0

    while True:
        if used[next]:
            count = 0
            break

        if next == number_of_members - 1:
            count += 1
            break

        used[next] = 1
        count += 1
        next = to_list[next]

    print count
