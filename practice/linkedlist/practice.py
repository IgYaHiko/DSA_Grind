class LinkedList:
    def __init__(self, data):
        self.data = data
        self.next = None

head = LinkedList(1)
second = LinkedList(2)
third = LinkedList(3)

head.next = second
second.next = third

def print_ll(head):
    curr = head
    while curr:
        print(curr.data, end=" => ")
        curr = curr.next

def insert_at_head(head, data):
    new_node = LinkedList(data)
    new_node.next = head
    return new_node

def insert_at_tail(head,data):
    new_node = LinkedList(data)
    if not head:
        return new_node
    curr = head

    while curr.next:
        curr = curr.next
    curr.next = new_node
    return head

def build_list(arr):
    dummy = LinkedList(0)
    curr = dummy

    for num in arr:
        curr.next = LinkedList(num)
        curr = curr.next
    
    return dummy.next

arr = [5,6,66,6,6,6,644,4,46,6]
head = build_list(arr)

add = insert_at_head(head,20000)
dell = insert_at_tail(head, 5000)
print_ll(add)