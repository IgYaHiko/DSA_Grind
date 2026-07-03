from typing import Optional
from linkedlist import ListNode, create_linked_list, create_cycle

class Solution:
    def hasCycle(self, head: Optional[ListNode]):
        slow = head 
        fast = head
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
            if fast == slow:
               return True
        return False
    
head = create_linked_list([3, 2, 0, -4])
head = create_cycle(head, 1)

sol = Solution()
print(sol.hasCycle(head=head))
