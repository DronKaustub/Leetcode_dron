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
    int getDecimalValue(ListNode* head) {
        ListNode* temp =  head;
        ListNode* x= temp;
        if(!head->next){
            if(head->val==1){return 1;}
            return 0;}
        ListNode* y =head->next;
        unsigned long int ans =0;
        int count = 0;
        while(temp && y){
            temp->next=y->next;
            y->next=x;
            x=y;
            y=temp->next;
            
           
            
        }
        temp=x;
        unsigned int sum=0;
        while(temp){
            cout<<temp->val<<" ";
            if(temp->val == 1){
                
                sum =sum+pow(2,count);
                //cout<<sum<<" ";

            }
            temp=temp->next;
            count++;
        }

        return sum;
    }
};