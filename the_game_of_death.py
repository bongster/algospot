T = int(input())


def get_point_number(to_list, to_number, current_member, try_count):
    if len(to_list) < try_count:
        return 0
    elif to_list[int(current_member)] == to_number:
        return try_count + 1
    else:
        return get_point_number(
            to_list,
            to_number,
            int(to_list[current_member]) - 1,
            try_count + 1
        )


for case in range(T):
    number_of_members = input()
    to_list = [input() for me in range(int(number_of_members))]

    print(get_point_number(to_list, number_of_members, 0, 0))
