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
     int carry = 0;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2 && !carry)return NULL;
        int sum = 0;
        if(l1 && l2){
            sum  = (l1->val+l2->val+carry);
        }else if(l1){
             sum  = l1->val+carry;
        }else if(l2){
                sum  = l2->val+carry;
        }else{
            sum = carry;
        }
        carry = sum/10;
        ListNode *p = new ListNode(sum%10);
        if(l1->next && l2->next)
        p->next = addTwoNumbers(l1->next,l2->next);
        else if(l1->next)
            p->next = addTwoNumbers(l1->next,new ListNode(0));
        else if(l2->next) 
            p->next = addTwoNumbers(new ListNode(0),l2->next);
        else if(carry)
            p->next = new ListNode(carry);
            
        return p;
    }
};
