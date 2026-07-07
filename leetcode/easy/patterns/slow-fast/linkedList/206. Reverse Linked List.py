from linkedlist import create_linked_list, ListNode, Optional

class Solution:
    def reverseLinkedlist(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        prev = None
        while curr != None:
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next
        return prev
    
arr = [1,2,3,4]
head = create_linked_list(arr)
sol = Solution()
reversed_head = sol.reverseLinkedlist(head)

curr = reversed_head
while curr:
    print(curr.val, end=" -> ")
    curr = curr.next
print("None")