class Solution {
public:
    ListNode* reverseS(ListNode * A, ListNode* B){
        ListNode * prev = nullptr;
        ListNode * curr = A;
        
        while(curr != B){
            ListNode * next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next || left == right) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        
        // Move to position left-1
        for(int i = 1; i < left; i++){
            prev = prev->next;
        }
        
        ListNode* start = prev->next;
        ListNode* end = start;
        
        // Move to position right
        for(int i = left; i < right; i++){
            end = end->next;
        }
        
        ListNode* nextSegment = end->next;
        end->next = nullptr;
        
        // Reverse the segment
        ListNode* reversedHead = reverseS(start, nullptr);
        
        // Connect back
        prev->next = reversedHead;
        start->next = nextSegment;
        
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};