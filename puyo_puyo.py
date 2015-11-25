
def get_linked_dot(puyo, current_row, current_column, value=None, result=[]):
    '''
        현재와 같이 연결 되어 있는 노드의 리스트 가져오기
    '''
    if current_row > 12 or current_column > 6:
        return result
    elif puyo[current_row][current_column] == '.':
        return result
    elif not value:
        result.append([current_row, current_column])
        value = puyo[current_row][current_column]
        return get_linked_dot(
            puyo, current_row + 1, current_column, value, result) + \
            get_linked_dot(
                puyo, current_row, current_column + 1, value, result)

    elif puyo[current_row][current_column] == value:
        result.append([current_row, current_column])
        return get_linked_dot(
            puyo, current_row + 1, current_column, value, result) + \
            get_linked_dot(
                puyo, current_row, current_column + 1, value, result)
    else:
        return result


def main():
    puyo = []
    for row in range(12):
        puyo.append([i for i in input()])
    print(get_linked_dot(puyo, 8, 1))

if __name__ == '__main__':
    main()
