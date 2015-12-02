import unittest
from extract_number import number_char


class TestExtractNumber(unittest.TestCase):
    def test_input1(self):
        input = 'aba,123;1a;0'
        number, char = number_char(input)
        self.assertEqual(number, '"123,0"')
        self.assertEqual(char, '"aba,1a"')

    def test_input2(self):
        input = '1;;01,a0,'
        number, char = number_char(input)
        self.assertEqual(number, '"1"')
        self.assertEqual(char, '",01,a0,"')

    def test_input3(self):
        input = '1'
        number, char = number_char(input)
        self.assertEqual(number, '"1"')
        self.assertEqual(char, '-')

    def test_input4(self):
        input = 'a'
        number, char = number_char(input)
        self.assertEqual(number, '-')
        self.assertEqual(char, '"a"')


if __name__ == '__main__':
        unittest.main()
