#!/usr/bin/env python3
class Solution:
		def longestCommonPrefix(self, strs):
				index = 0
				#print("len is {}".format(str(len(strs[0]))))
				while index < len(strs[0]):
						#print("index is  -  {}".format(str(index)))
						for s in strs:
								#print("    {} - {}: index is {}".format(strs[0][index], s[index], str(index)))
								if index >= len(s):
										return strs[0][0:index]
								elif not strs[0][index] is s[index]:
										return strs[0][0:index]
						index += 1

				return strs[0][0:index]





if __name__ == '__main__':
		s = Solution()
		print(s.longestCommonPrefix(["cat", "cable"]))
		print(s.longestCommonPrefix(["cattle", "cattble","cate"]))
		print(s.longestCommonPrefix(["cat"]))
		print(s.longestCommonPrefix(["dog","racecar","car"]))
		print(s.longestCommonPrefix(["ab","a"]))
