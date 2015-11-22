# https://www.acmicpc.net/problem/11557

T = int(input())

for case in range(T):
    max = 0
    winner_name = ''
    count_of_university = input()

    for i in range(int(count_of_university)):
        name, alchol = input().split(' ')
        if int(alchol) > max:
            winner_name = name
            max = int(alchol)

    print(winner_name)
