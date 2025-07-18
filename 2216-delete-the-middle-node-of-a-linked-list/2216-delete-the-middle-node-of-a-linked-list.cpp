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
        if(head->next==NULL){
            return head=NULL;
        }
        //fast=fast->next;
        fast=fast->next->next;
        while(fast&&fast->next!=nullptr){
            fast=fast->next->next;
            //if(!fast||!fast->next){break;}
            slow=slow->next;
            
            cout<<slow->val;
        }
        
        slow->next=slow->next->next;
        
        
        return head;
    }
};