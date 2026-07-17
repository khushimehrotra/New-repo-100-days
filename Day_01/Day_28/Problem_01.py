from typing import Optional

# 1. Define the ListNode class so Python understands the data structure
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# 2. The solution class from LeetCode
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        current = dummy
        carry = 0
        
        while l1 or l2 or carry:
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0
            
            total = val1 + val2 + carry
            carry = total // 10
            digit = total % 10
            
            current.next = ListNode(digit)
            current = current.next
            
            if l1: l1 = l1.next
            if l2: l2 = l2.next
            
        return dummy.next

# 3. (Optional) Testing block to run and verify code locally
if __name__ == "__main__":
    # Helper to convert a Python list into a linked list
    def to_linked_list(lst):
        dummy = ListNode(0)
        curr = dummy
        for val in lst:
            curr.next = ListNode(val)
            curr = curr.next
        return dummy.next

    # Helper to print the linked list
    def print_linked_list(head):
        result = []
        while head:
            result.append(str(head.val))
            head = head.next
        print(" -> ".join(result))

    # Replicating Example 1: l1 =, l2 = [5, 6, 4]
    l1 = to_linked_list([2, 4, 3])
    l2 = to_linked_list([5, 6, 4])

    solution = Solution()
    output_head = solution.addTwoNumbers(l1, l2)
    
    print("Resulting Linked List:")
    print_linked_list(output_head)  # Expected Output: 7 -> 0 -> 8
