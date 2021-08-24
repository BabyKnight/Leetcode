#!/usr/bin/env python3

class Solution:
		def isValid(self, s: str) -> bool:
				l = []
				for c in s:
						if c in ['(', '[', '{']:
								l.append(c)
						else:
								if len(l) <= 0:
										return False
								elif c is ')' and l.pop(-1) is not '(':
										return False
								elif c is ']' and l.pop(-1) is not '[':
										return False
								elif c is '}' and l.pop(-1) is not '{':
										return False
				if len(l) != 0:
						return False
				return True

if __name__ == '__main__':
		s = Solution()
		print(s.isValid("()"))
		print(s.isValid("()[]{}"))
		print(s.isValid("(]"))
		print(s.isValid("([)]"))
		print(s.isValid("{[]}"))
