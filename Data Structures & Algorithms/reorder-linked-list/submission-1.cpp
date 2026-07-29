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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        int i = 1;
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        while(head && prev){
            if(i%2){
                temp->next = head;
                head = head->next;
            }
            else{
                temp->next = prev;
                prev = prev->next;
            }
            temp=temp->next;
            i++;
        }
        if(head)temp->next = head;
        else temp->next = prev;
        head = ans->next;
    }
};
