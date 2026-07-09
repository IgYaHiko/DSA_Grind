from linkedlist import create_linked_list, Optional, ListNode
class Solution:
     def removeElementfromlinkedlist(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head
        curr = dummy

        while curr.next != None:
            if curr.next.val == val:
               curr.next = curr.next.next
            else:
                curr = curr.next

        return dummy.next
     

arr = [1,2,6,3,4,5,6]
head = create_linked_list(arr)
sol = Solution()
ans = sol.removeElementfromlinkedlist(head=head, val=6)
curr = ans
while curr:
    print(curr.val, end=" -> ")
    curr = curr.next
print("None")            
