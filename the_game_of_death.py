T = int(input())


def get_point_number(point_map, max_count, current_member, try_count):
    if max_count < try_count:
        return 0
    elif point_map[current_member] == max_count:
        return try_count + 1
    else:
        return get_point_number(
            point_map,
            max_count,
            point_map[current_member],
            try_count + 1
        )


for case in range(T):
    point_map = {}
    number_of_members = int(input())
    enable_game = False
    for me in range(1, number_of_members + 1):
        point_map[me] = int(input())
        enable_game = enable_game or point_map[me] == number_of_members

    print(get_point_number(point_map, number_of_members, 1, 0)
          if enable_game
          else 0)
