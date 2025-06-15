/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* fast=head;
//         ListNode* slow=head;
//         map<int,int*> m;

//         if(head==nullptr&&head->next==nullptr){
//             return NULL;
//         }
//         int count=0;
//         while(fast&&fast->next!=NULL){
//             fast=fast->next->next;
//             slow=slow->next;
//             if(m.find(slow->val)!= m.end()){
//                 return slow;
//             }
//             if(m.find(fast->val)!= m.end()){
//                 return fast;
//             }
//             m[slow->val]=slow->next;
//             m[fast->val]=fast->next;
//         }
//         return slow;
//     }
// };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;

        ListNode *slow = head;
        ListNode *fast = head;

        // Step 1: Detect if there is a cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Find the start of the cycle
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;  // Starting node of the cycle
            }
        }

        return nullptr;  // No cycle
    }
};
