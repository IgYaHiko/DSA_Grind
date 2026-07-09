from linkedlist import create_linked_list , ListNode, Optional

class Solution:
    def reorderlist(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head 
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
        l1 = head
        l2 = slow.next
        slow.next = None
        prev = None
        curr = l2
        while curr != None:
            next = curr.next
            curr.next = prev 
            prev = curr
            curr = next
        rev = prev 
        while l1 != None and rev != None:
              next1 = l1.next
              next2 = rev.next
              l1.next = rev
              rev.next = next1
              l1 = next1
              rev = next2
        return head
sol = Solution()
arr = [1,2,3,4,5]
head = create_linked_list(arr)
ans = sol.reorderlist(head)
curr = ans
while curr:
    print(curr.val, end=" -> ")
    curr = curr.next
print("None")