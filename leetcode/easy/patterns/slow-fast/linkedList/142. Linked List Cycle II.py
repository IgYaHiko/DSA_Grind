# Problem statement is same as the previous find the circle just added is you have to find the starting node of the cycle  formula: L1 = NC - L2
from typing import Optional
from linkedlist import ListNode, create_linked_list, create_cycle


class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                slow = head

                while slow != fast:
                    slow = slow.next
                    fast = fast.next

                return slow

        return None


# --------------------------
# LeetCode Style Test Case
# --------------------------

head = [3, 2, 0, -4]
pos = 1

linked_list = create_linked_list(head)
linked_list = create_cycle(linked_list, pos)

sol = Solution()
ans = sol.detectCycle(linked_list)

if ans:
    print(f"Input: head = {head}, pos = {pos}")
    print(f"Output: tail connects to node index {pos}")
    print(
        f"Explanation: There is a cycle in the linked list, where tail connects to the node with value {ans.val}."
    )
else:
    print(f"Input: head = {head}, pos = {pos}")
    print("Output: no cycle")       