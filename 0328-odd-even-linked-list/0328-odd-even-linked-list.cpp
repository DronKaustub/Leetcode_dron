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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* x= head;
        ListNode* b=head;
        
        if(head==NULL){
            return head;
        }
        b=b->next;
        ListNode* c=b;
        //cout<<b->val<<c->val;
        while(x->next!=NULL && b->next!=NULL){
                cout<<"x value: "<< x->val<< "Value b: "<< b->val<<endl;
                x->next=b->next;
                x=x->next;
                b->next=x->next;
                b=b->next;
        }
        x->next=c;
        
        return head;
    }
};