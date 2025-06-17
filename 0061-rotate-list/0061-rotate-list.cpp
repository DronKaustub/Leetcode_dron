/**
 * Definition for singly-Listed list.
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        int count=1;
        if(!head){return head;}
        while(fast->next!=NULL){
            fast=fast->next;
            count++;
        }
        cout<<count<<endl;
        if(k>count){k=k%count;}
        cout<<k<<endl;
        fast->next=head;
        k=count - k;
        cout<<k;
        while(k){
            fast=fast->next;
            k--;
        }
        head=fast->next;
        fast->next=NULL;
        return head;

        
    }
};