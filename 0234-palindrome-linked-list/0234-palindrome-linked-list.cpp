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
/*
//better approach
//by reversing the second half of the linked list in-place and comparing it with the first half:
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Step 1: Find the middle of the list using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }

        // Step 3: Compare the first and the reversed second half
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;
        while (secondHalf) {
            if (firstHalf->val != secondHalf->val) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
*/