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
    ListNode* reverseNode(ListNode* head){
        ListNode* temp =  head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* l=head->next;
        ListNode* k=head;
        while(temp&& temp->next){
            temp->next=l->next;
            l->next=k;
            k=l;
            l=temp->next;
        }
        return k;
    }
    ListNode* removeNodes(ListNode* head) {
        head=  reverseNode(head);
        ListNode* temp =  head;
        ListNode* l=head;
        ListNode*k=head;
        ListNode* p = new ListNode(-1);
        p->next=head;
        int max=0;
        
        while(temp&& temp->next){
           if(temp->val>temp->next->val){
            temp->next=temp->next->next;
           }
           else{temp=temp->next;}
        }
        
        return reverseNode(head);
    }
};