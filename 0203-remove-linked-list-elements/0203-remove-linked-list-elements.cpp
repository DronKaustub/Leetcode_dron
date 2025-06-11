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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        
        if (head==NULL){
            return head;
        }
        
        if(head->val==val)
        {
            while(head)
            {
                if(head->val==val)
                head=head->next;

                else
                break;
            }
        }
        
        
        while(temp){
            cout<<(temp->val);
            if(temp->next==NULL){
                return head;
            }
            if (temp->next->val==val){
                temp->next=temp->next->next;
                
            }
            else{
            temp = temp->next;
            }
        }
        

        return head;
    }
};