#/us/bin/env python3

class ListNode:
		def __init__(self, val=0, next=None):
				self.val = val
				self.next = next

class Solution:
		def mergeTwoLists(self, l1, l2):
				p = l1
				q = l2

				if l1 is None:
						return l2;
				if l2 is None:
						return l1;

				if p.val <= q.val:
						res = p
						p = p.next
				else:
						res = q
						q = q.next
				curr = res

				while p is not None and q is not None:
						if p.val <= q.val:
								curr.next = p
								curr = curr.next
								p = p.next
						else:
								curr.next = q
								curr = curr.next
								q = q.next
				if p is not None:
						curr.next = p
				if q is not None:
						curr.next = q

				return res

		def merge2lists(self, l1, l2):
				if l1 is None:
						return l2
				elif l2 is None:
						return l1
				elif l1.val < l2.val:
						l1.next = self.merge2lists(l1.next, l2)
						return l1
				else:
						l2.next= self.merge2lists(l1, l2.next)
						return l2
						

def create_singly_linked_list(l):
		curr = ListNode(val=l[0])
		res = curr

		print(l[1:])
		for v in l[1:]:
				l = ListNode(val=v)
				curr.next = l
				curr = l
		return res

def print_list(l):
		curr = l
		while curr is not None:
				print(curr.val)
				curr = curr.next


if __name__ == '__main__':

		a = [1, 3, 5, 7, 9]
		b = [0, 2, 4, 6, 8, 10]

		la = create_singly_linked_list(a)
		print_list(la)
		lb = create_singly_linked_list(b)
		print_list(lb)

		s = Solution()
		#res = s.mergeTwoLists(la, lb)
		#print_list(res)

		res2 = s.merge2lists(la, lb)
		print_list(res2)


