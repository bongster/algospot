T = int(input())


def get_point_number(to_list, to_number, current_idx, try_count):
    me = to_list[current_idx]
    if len(to_list) < try_count or current_idx + 1 == me:
        return 0
    elif me == to_number:
        return try_count + 1
    else:
        return get_point_number(
            to_list,
            to_number,
            to_list[current_idx] - 1,
            try_count + 1
        )


for case in range(T):
    number_of_members = int(input())
    to_list = [int(input()) for me in range(int(number_of_members))]

    print(get_point_number(to_list, number_of_members, 0, 0))
