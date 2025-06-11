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
        if(head==NULL){
            return head;
        }
        ListNode* prev= nullptr;

        ListNode* curr= head;
        if(curr->next==NULL){
            return head;
        }
        ListNode* after= head->next;
        cout<<" Curr "<<curr->val<<" "<<" next "<<after->val<<endl;
        while(after){
            
            curr->next=prev;
           // cout<<" Curr "<<curr->val<<" "<<" next "<<curr->next->val;
            prev=curr;
            
            curr=after;
            after=after->next;
           
            
        }
        curr->next=prev;
        prev=curr;
        return prev;
    }
};