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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy =new ListNode(0);
    dummy->next = head;

     ListNode* fast = dummy;
     ListNode* slow = dummy;

     for (int i = 0; i <= n; ++i) {
        if (fast == nullptr) {  
            return head; 
        }
        fast = fast->next;
    }

     while(fast != nullptr){
        fast = fast->next;
        slow = slow->next;
     }
     ListNode* nodetodelete =slow->next;
     slow->next = slow->next->next;

     delete nodetodelete;

     ListNode* newhead =dummy->next;
     delete dummy;
     return newhead;


    }
};
