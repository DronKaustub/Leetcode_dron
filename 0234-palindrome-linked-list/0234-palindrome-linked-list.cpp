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
    bool isPalindrome(ListNode* head) {
        ListNode* fast= head;
        ListNode* slow= head;
        stack<int> st;
        if(head->next==NULL){
            return true;
        }
        int count=0;
        while(fast){
            if(fast->next==NULL){
                slow=slow->next;
                break;}
            fast=fast->next->next;
            st.push(slow->val);
            slow=slow->next;
            count++;
        }
        cout<<count<<endl;
        while(!st.empty()) {
        cout << st.top() << " ";
        if(slow->val!=st.top()){return false;}
        slow=slow->next;
        st.pop();
    }
    return true;


        return true;
    }
};