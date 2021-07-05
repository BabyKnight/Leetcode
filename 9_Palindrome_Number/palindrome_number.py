#!/usr/bin/env python3

class Solution:
    def isPalindrome(self, x: int)->int:
        if x < 0:
            return False
        reverse = int(str(x)[::-1])

        if reverse > 2**31-1:
            return False
        if reverse == x:
            return True
        return False


if __name__ == '__main__':
    a = Solution()
    print(a.isPalindrome(121))
    print(a.isPalindrome(-121))
    print(a.isPalindrome(10))
    print(a.isPalindrome(-101))
    print(a.isPalindrome(998765432))
