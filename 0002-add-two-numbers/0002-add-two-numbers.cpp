class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        if (!l1 && !l2 && carry == 0)
            return nullptr;

        int sum = carry;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        ListNode* node = new ListNode(sum % 10);
        node->next = addTwoNumbers(l1, l2, sum / 10);
        return node;
    }
};
