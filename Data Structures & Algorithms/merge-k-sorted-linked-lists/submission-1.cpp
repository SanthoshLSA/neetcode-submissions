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
    ListNode* merge2Lists(ListNode* head1,ListNode* head2){
        ListNode* dummy=new ListNode(69);
        ListNode* temp=dummy;
        while(head1 && head2){
            if(head1->val <= head2->val){
                temp->next=head1;
                head1=head1->next;
                temp=temp->next;
            }
            else{
                temp->next=head2;
                head2=head2->next;
                temp=temp->next;
            }
        }
        while(head1){
            temp->next=head1;
            head1=head1->next;
            temp=temp->next;
        }
        while(head2){
            temp->next=head2;
            head2=head2->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())return nullptr;
        ListNode* merged=lists[0];
        for(int i=1;i<lists.size();i++){
            merged= merge2Lists(merged,lists[i]);
        }
        return merged;
    }
};
