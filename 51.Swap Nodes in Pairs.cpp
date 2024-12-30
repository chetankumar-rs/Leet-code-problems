/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = temp;

        while(curr->next != nullptr && curr->next->next != nullptr){
            ListNode* first = curr->next;
            ListNode* second = curr->next->next;

            first->next = second->next;
            second->next = first;
            curr->next = second;

            curr = first;
        }
        head = temp->next;
        delete temp;
        return head;
    }  
};
