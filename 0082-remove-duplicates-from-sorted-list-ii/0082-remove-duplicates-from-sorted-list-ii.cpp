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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
       
        while(temp!=NULL){
            
            if(temp->next!=NULL && temp->next->val==temp->val){
               int data=temp->val;
            while(temp!=NULL&&temp->val==data){
                temp=temp->next;
        
            }
                if(prev==NULL){
                    head=temp;
                }
                else{
                    prev->next=temp;
                    //cout<<"prev "<<prev->val<<" temp "<<temp->val<<endl;
                }
            }
            else{
                prev=temp;
                temp=temp->next;
                
            }
        }
        return head;
    }
};