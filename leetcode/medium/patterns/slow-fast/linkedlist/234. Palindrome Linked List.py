from linkedlist import create_linked_list, ListNode, Optional
class Solution:
    def palindromeLinkedList(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head 
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
        prev = None
        curr = slow
        while curr != None:
            nuxt = curr.next
            curr.next = prev
            prev = curr
            curr = nuxt

        f = head
        s = prev
        while f != None and s != None:
            if f.val != s.val:
                return False
            f = f.next
            s = s.next
        return True
    
head = [1,2,2,1]
ll = create_linked_list(head)
sol = Solution()
print(f"{sol.palindromeLinkedList(head=ll)}")  