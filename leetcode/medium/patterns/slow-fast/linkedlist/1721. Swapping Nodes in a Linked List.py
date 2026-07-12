from linkedlist import create_linked_list, Optional, ListNode
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        i = 0
        first = head
        while i < k - 1:
            first = first.next
            i += 1
        slow = head
        fast = first
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next
        temp = slow.val
        slow.val = first.val
        first.val = temp
        return head

arr = [7,9,6,6,7,8,3,0,9,5]
head = create_linked_list(arr)
sol = Solution()
ans = sol.swapNodes(head=head, k = 5)
curr = ans
print(arr)
while curr:
    print(curr.val, end="->")
    curr = curr.next
print("None")
