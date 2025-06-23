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
   ListNode* merge(ListNode * head1, ListNode* head2){
       
       ListNode* last = head1;
       ListNode* front = head2;
       ListNode* dummy= new ListNode(-1);
       ListNode* start= dummy;
       while(front && last){
           cout<<"front : "<<front->val<<" last : "<<last->val<<endl;
           if(front->val<last->val){
               dummy->next=front;
               front=front->next;
           }
           else{
               dummy ->next= last;
               last=last->next;
           }
           dummy=dummy->next;
       }
       if(front){
           dummy->next= front;
       }
       if(last){
           dummy->next= last;
       }
       return start->next;
   }
   ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.empty()) return NULL;
       if(lists.size() == 1) return lists[0];
       
       int mid = lists.size() / 2;
       vector<ListNode*> left(lists.begin(), lists.begin() + mid);
       vector<ListNode*> right(lists.begin() + mid, lists.end());
       
       ListNode* leftMerged = mergeKLists(left);
       ListNode* rightMerged = mergeKLists(right);
       
       return merge(leftMerged, rightMerged);
   }
};