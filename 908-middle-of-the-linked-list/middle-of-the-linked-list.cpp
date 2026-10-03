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
int findsize(ListNode * head)
{
    ListNode *temp=head;
    int index=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        index++;
    }
    return index;
}

    ListNode* middleNode(ListNode* head) {
        int size=findsize(head);
        int mid=(size/2);

        ListNode *temp=head;
        for (int i=0;i<mid;i++)
        {         
           
             temp=temp->next;

        }
        return temp;
    }
};