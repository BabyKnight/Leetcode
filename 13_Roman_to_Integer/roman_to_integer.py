#!/usr/bin/env python3

class Solution:
    def romanToInt(self, s: str) -> int:
        data_dict = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }
        previous = 0
        res_sum = 0
        for val in s:
            if previous < data_dict[val]:
                res_sum -= previous * 2
            res_sum += data_dict[val]
            previous = data_dict[val]
        return res_sum

if __name__ == '__main__':
    a = Solution()
    print(a.romanToInt('III'))
    print(a.romanToInt('IV'))
    print(a.romanToInt('IX'))
    print(a.romanToInt('LVIII'))
    print(a.romanToInt('MCMXCIV'))
