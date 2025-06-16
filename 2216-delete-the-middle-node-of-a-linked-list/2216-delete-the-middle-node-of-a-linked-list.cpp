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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast =  head;
        ListNode* slow =  head;
        while(head->next==NULL){
            return head=NULL;
        }
        //fast=fast->next;
        while(fast&&fast->next!=nullptr){
            fast=fast->next->next;
            if(!fast||!fast->next){break;}
            slow=slow->next;
            
            cout<<slow->val;
        }
        // if(slow->next->next==NULL){
        //     slow->next=NULL;
        // }
        //else{
        slow->next=slow->next->next;
        //}
        return head;
    }
};