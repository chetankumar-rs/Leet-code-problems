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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != nullptr && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* newNode = head;
        ListNode* prevNode = nullptr;

        while(newNode != nullptr){
            if(newNode->val == val){
               prevNode->next = newNode->next;
               delete newNode;
               newNode = prevNode->next;
            }
            else{
                prevNode = newNode;
                newNode = newNode->next;
            }
        }
        return head;
        
    }
};
