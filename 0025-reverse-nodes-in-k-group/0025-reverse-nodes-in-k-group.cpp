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
    ListNode* reverseKGroup(ListNode* head, int k) {
     // code here
        if (!head) return NULL;

        ListNode* check = head;
        for (int i = 0; i < k; i++) {
            if (!check) return head; 
            check = check->next;
        }

        ListNode *X = head;
        ListNode *A= head;
       
        ListNode *B= head->next;
        int count =1;
        // Node *Z = NULL;
        // Node *P = head;
        // int a=0;
        while(A->next!=NULL && count<k){
            // if(k==count){
            //     count=1;
            //     if(Z!=NULL){
            //         Z->next=X;
            //     }
            //     if(a==0){
            //         a++;
            //         P=X;
            //     }
            //     X=B;
            //     A=B;
            //     if(A->next!=NULL){B=A->next;}
            //     else{break;}
            // }
            count++;
            A->next=B->next;
            B->next=X;
            X=B;
            B=A->next;
            
        }
        A->next=reverseKGroup(B, k);
        return X;
    }
    
};