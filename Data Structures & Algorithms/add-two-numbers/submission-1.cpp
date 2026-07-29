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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* d1 = l1;
        ListNode* d2 = l2;
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        int carry = 0;
        int a = 0 ;
        int b = 0 ;
        while(d1 || d2){
            if(d1) a = d1->val;
            else a = 0;
            if(d2) b = d2->val;
            else b = 0;
            int sum = a+b+carry;
            if(sum>=10){
                carry = 1;
                sum-=10;}
            else carry = 0;
            
            cur->next = new ListNode(sum);
            cur = cur->next;
            if(d1)d1=d1->next;
            if(d2)d2=d2->next;
        }
        if(carry ==1){
            cur->next = new ListNode(1);
        }
        return dummy->next;

    }
};
