from linkedlist import ListNode, create_linked_list, Optional

class Solution:
     def middleOflinkedlist(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
        return slow
     

head = [1,2,3,4,5]
ll = create_linked_list(head)
sol = Solution()
print(f"middle of the ll :{sol.middleOflinkedlist(head=ll).val}")  