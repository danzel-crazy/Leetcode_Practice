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
    ListNode* middleNode(ListNode* head) {
        if(head->next == nullptr) return head;

        ListNode* first = head;
        ListNode* second = head;
        while(second != nullptr && second->next != nullptr){
            first = first->next;
            second = second->next->next;
        }
        return first;
    }
};
