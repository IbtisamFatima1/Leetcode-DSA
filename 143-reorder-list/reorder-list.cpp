class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL) return;  

        ListNode *temp = head;
        int index = 0;                                    
        while (temp != NULL)
        {
            temp = temp->next;
            index++;
        }
        int mid = index / 2;

        ListNode *h2 = head;                             
        for (int i = 0; i < mid; i++)
        {
            h2 = h2->next;
        }
        ListNode *head2 = h2->next;                      
        h2->next = NULL;                                  

        ListNode *prev = NULL;       // must start as NULL: it becomes the new tail's next
ListNode *curr = head2;

while (curr != NULL)
{
    ListNode *nxt = curr->next;   
    curr->next = prev;           
    prev = curr;                  
    curr = nxt;                  
}
head2=prev;
ListNode *first=head;
ListNode *second=head2;
while(first && second)
{
    ListNode *nxt1=first->next;
    ListNode *nxt2=second->next;
    first->next=second;
    second->next=nxt1;
    first=nxt1;
    second=nxt2;
}
    }
};