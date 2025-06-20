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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * temp1 = list1;
        ListNode * temp2 = list2;
        
        
        ListNode* ans= NULL;
        ListNode* prev= NULL;
        if(temp1==NULL){return temp2;}
        if(temp2==NULL){return temp1;}
        
        while(temp1 && temp2 ){
            
            if(temp1->val<=temp2->val){
                if(ans==NULL){
                    ans=temp1;
                    prev=ans;
                    temp1=temp1->next;
                }
                else{
                prev->next=temp1;
                temp1=temp1->next;
                prev=prev->next; 
                }
            }
            // else if(temp1->val>temp2->val){
                else{
                if(ans==NULL){
                    ans=temp2;
                    prev=ans;
                    temp2=temp2->next;

                }
                else{
                prev->next=temp2;
                temp2=temp2->next;
                prev=prev->next; 
                }
            }
            
            
        }
        if(temp1!=NULL){
            prev->next=temp1;
        }
        if(temp2!=NULL){
            prev->next=temp2;
        }
        return ans;
    }
};