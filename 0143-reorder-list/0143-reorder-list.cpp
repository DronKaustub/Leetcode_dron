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
    ListNode* reverseS(ListNode* head) {
        ListNode * X=head;
        ListNode * curr = head;
        if(head==NULL || head->next== NULL){
            return head;
        }
        ListNode* NEXT = head->next;
        while(curr&&NEXT){
            cout<<curr->val<<" ";
            curr->next=NEXT->next;
            NEXT->next=X;
            X=NEXT;
            NEXT=curr->next;
        } 
        return X;
        


    }
    void reorderList(ListNode* head) {
        ListNode * temp1=head;
        if(head!=NULL || head->next!=NULL){
        ListNode * temp2=NULL;
        ListNode * fast=head->next;
        ListNode * slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;

        }
        
        temp2 = slow->next;
        slow->next=NULL;
        temp2 = reverseS(temp2);
        
        while(temp1&&temp2){
            //cout<<temp1->val<<" ";
            slow=temp1->next;
            fast=temp2->next;
            temp1->next=temp2;
            temp2->next= slow;
            temp2=fast;
            temp1=slow;
        }
        head = temp2;



        }



    }
};