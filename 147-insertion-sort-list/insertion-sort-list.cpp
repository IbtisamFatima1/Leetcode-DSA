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
    
ListNode* insertionSortList(ListNode* head) {
    ListNode dummy(0);               
    ListNode* curr = head;

    while (curr) {
        ListNode* nxt = curr->next; 

        ListNode* prev = &dummy;
        while (prev->next && prev->next->val < curr->val) {
            prev = prev->next;       // find insertion spot
        }

        curr->next = prev->next;     
        prev->next = curr;           // link smaller part to curr

        curr = nxt;                  // move on
    }

    return dummy.next;
}
};
