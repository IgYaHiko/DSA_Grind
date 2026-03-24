class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None

head = ListNode(1)
second = ListNode(2)
third = ListNode(3)

head.next = second
second.next = third

def print_list(head):
    curr = head
    while curr:
        print(curr.val, end=" -> ")
        curr = curr.next

def insert_at_head(head, val):
    new_node = ListNode(val)
    new_node.next = head
    return new_node
def insert_at_tail(head, val):
    new_node = ListNode(val)

    if not head:
        return new_node

    curr = head
    while curr.next:
        curr = curr.next

    curr.next = new_node
    return head
def insert_at_position(head, pos, val):
    if pos == 0:
        return insert_at_head(head, val)

    curr = head
    for _ in range(pos - 1):
        curr = curr.next

    new_node = ListNode(val)
    new_node.next = curr.next
    curr.next = new_node

    return head
def delete_value(head, val):
    if not head:
        return None

    if head.val == val:
        return head.next

    curr = head
    while curr.next:
        if curr.next.val == val:
            curr.next = curr.next.next
            return head
        curr = curr.next

    return head
def build_list(arr):
    dummy = ListNode(0)
    curr = dummy

    for num in arr:
        curr.next = ListNode(num)
        curr = curr.next

    return dummy.next
arr = [1, 2, 3, 4]
head = build_list(arr)

print_list(head)

head = insert_at_head(head, 0)
head = insert_at_tail(head, 5)

print_list(head)
