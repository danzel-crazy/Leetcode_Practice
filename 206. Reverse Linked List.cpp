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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* temp = nullptr;
        ListNode* now = nullptr;
        while(head->next != nullptr){
            now = head;
            head = head->next;
            now->next = temp;
            temp = now;
        }
        
        head->next = now;
        return head;
    }
};
