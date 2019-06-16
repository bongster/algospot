import math

class Matrix():
    def __init__(self, matrix):
        self.matrix = matrix
        self.height = len(matrix)
    
    def print_origin(self):
        print (self.matrix)

    def print_spirally(self):
        if self.height == 1:
            print(self.matrix)
            return

        # print(self.matrix, int(self.height/ 2))
        x = 0
        while x < math.floor(self.height/2):
            width_len = len(self.matrix[x])
            # print('x : {0}, width_len {1}'.format(x, width_len))
            # horizontal arr
            h_arr = range(x, width_len - x)
            # print(h_arr)
            # vertical arr
            v_arr = range(x + 1, width_len - x - 1)
            # print(v_arr)

            # left to right horizontal
            # print('left to right horizontal')
            for i in h_arr:
                # print(x, i)
                print(
                    self.matrix[x][i],
                    end=' '
                )
            # print('=' * 10)
            # up to down vertical
            # print('up to down horizontal')
            for up_to_down_i in v_arr:
                # print(up_to_down_i, width_len - x  - 1)
                print(
                    self.matrix[up_to_down_i][width_len - x - 1],
                    end=' '
                )
            # print('=' * 10)
            # print('right to left horizontal')
            for right_to_left_i in reversed(h_arr):
                # print(width_len - x - 1, right_to_left_i)
                print(
                    self.matrix[width_len - x - 1][right_to_left_i], 
                    end=' '
                )
            # print('=' * 10)
            # print('down to up horizontal')
            for down_to_up_i in reversed(v_arr):
                # print(down_to_up_i, x)
                print(
                    self.matrix[down_to_up_i][x], 
                    end=' '
                )
            # print('=' * 10)
            x = x + 1

        if not self.height % 2 == 0:
            center_i = int(self.height / 2)
            # print(center_i, center_i)
            print(self.matrix[center_i][center_i])

if __name__ == "__main__":
    # m = Matrix([
    #     [1, 2, 3, 4],
    #     [5, 6, 7, 8],
    #     [9 ,10, 11, 12],
    #     [13, 14, 15, 16],
    # ])
    # m.print_origin()
    # m.print_spirally()

    m2 = Matrix([
        [1, 2, 3, 4, 5],
        [6, 7, 8, 9, 10],
        [11, 12, 13, 14, 15],
        [16, 17, 18, 19, 20],
        [21, 22, 23, 24, 25],
    ])
    # m2.print_origin()
    m2.print_spirally()