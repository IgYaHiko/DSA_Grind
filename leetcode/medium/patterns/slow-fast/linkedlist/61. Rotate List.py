from linkedlist import create_linked_list, ListNode, Optional
class Solution:
    def rotateList(self, head: Optional[ListNode], k: int) -> Optional[ListNode]: 
        if head == None:
           return None
        if head.next == None:
           return head
        
        curr = head
        length = 0
        while curr != None:
            length += 1
            curr = curr.next

        k = k % length
        if k == 0:
           return head
        split_node = length - k
        slow = head
        for _ in range(split_node - 1):
            slow = slow.next
        
        l2 = slow.next
        slow.next = None

        cur = l2
        while cur.next != None:
            cur = cur.next
        cur.next = head
        return l2
    
arr = [0,1,2]
head = create_linked_list(arr)
sol = Solution()
ans = sol.rotateList(head=head, k = 4)

curr = ans

while curr:
    print(curr.val, end="->")
    curr = curr.next
print("None")


