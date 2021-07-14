#!/usr/bin/env python3

class Solution:
    def intToRoman(self, num: int) -> str:
        num_map = {
                    1000: 'M',
                    900: 'CM',
                    500: 'D',
                    400: 'CD',
                    100: 'C',
                    90: 'XC',
                    50: 'L',
                    40: 'XL',
                    10: 'X',
                    9: 'IX',
                    5: 'V',
                    4: 'IV',
                    1: 'I',
        }
        res = ''
        for key in num_map:
            if num // key != 0:
                count = num // key
                res += count * num_map[key]
                num %= key

        return res
        


if __name__ == "__main__":
    s = Solution()
    print(s.intToRoman(3))
    print(s.intToRoman(4))
    print(s.intToRoman(9))
    print(s.intToRoman(58))
    print(s.intToRoman(1994))
    
