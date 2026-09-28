class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        ListNode* prev = NULL;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        int position = count - n;

        if (position == 0)
        {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        
        temp = head;
        count = 0;

        while (count != position)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        prev->next = temp->next;
        delete temp;

        return head;
    }
};