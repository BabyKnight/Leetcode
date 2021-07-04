#!/usr/bin/env python3

class Solution:
    def reverse(self, x: int) -> int:
        if x == 0:
            return 0
        if x > 0:
            temp = str(x)[::-1]
        else:
            temp = '-' + str(x)[1:][::-1]

        if int(temp) not in range(-1 * (2**31), 2**31 -1):
            return 0
        return int(temp)


if __name__ == '__main__':
     obj = Solution()
     test = obj.reverse(123456)
     print(test)
     test = obj.reverse(-123456)
     print(test)
     test = obj.reverse(0)
     print(test)
     test = obj.reverse(1534236469)
     print(test)
