/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        while(temp->next!=nullptr){
            temp->val=temp->next->val;

            cout<<temp->val;
            
            if(temp->next->next==nullptr){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;

        }
       // temp.delete();
        //cout<<temp->val;
        
        //return node;
    }
};