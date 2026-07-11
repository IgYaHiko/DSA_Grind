from linkedlist import create_linked_list, ListNode, Optional
class Solution:
    def oddEvenlist(self, head:Optional[ListNode]) -> Optional[ListNode]:
        odd = head 
        even = odd.next
        even_head = even
        while even != None and even.next != None:
            odd.next = even.next
            even.next = odd.next.next
            odd = odd.next
            even = even.next
        
        curr = odd 
        curr.next = even_head
        return head
    
arr = [1,2,3,4,5]
head = create_linked_list(arr)
sol = Solution()
ans = sol.oddEvenlist(head)
curr = ans
while curr:
    print(curr.val, end="->")
    curr = curr.next
print("None")
