# Definition for singly-linked list.
from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        res = ListNode(0)
        tail = res
        carry = 0

        while l1 or l2 or carry:
            digit1 = l1.val if l1 else 0
            digit2 = l2.val if l2 else 0

            vsum = digit1 + digit2 + carry

            carry = vsum // 10
            vsum = vsum % 10

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None

            tail.next = ListNode(vsum)
            tail = tail.next

        return res.next

s = Solution()

res = s.addTwoNumbers([9,9,9,9,9,9,9], [9,9,9])
print(res)