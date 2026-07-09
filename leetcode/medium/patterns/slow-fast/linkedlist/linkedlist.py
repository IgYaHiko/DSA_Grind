from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def create_linked_list(arr):
    """Convert a Python list into a linked list."""
    if not arr:
        return None

    head = ListNode(arr[0])
    curr = head

    for value in arr[1:]:
        curr.next = ListNode(value)
        curr = curr.next

    return head


def print_linked_list(head):
    """Print a linked list."""
    curr = head

    while curr:
        print(curr.val, end=" -> ")
        curr = curr.next

    print("None")


def create_cycle(head, pos):
    """
    Connect the last node to the node at index 'pos'.

    pos = -1  -> no cycle
    """

    if pos == -1 or head is None:
        return head

    cycle_node = None
    curr = head
    index = 0

    while curr.next:
        if index == pos:
            cycle_node = curr
        curr = curr.next
        index += 1

    if index == pos:
        cycle_node = curr

    curr.next = cycle_node
    return head