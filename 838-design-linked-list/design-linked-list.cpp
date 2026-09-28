class node
{
public:
    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList
{
public:
    node* head;

    MyLinkedList()
    {
        head = NULL;
    }

    int get(int index)
    {
        if (head == NULL)
        {
            return -1;
        }

        int count = 0;
        node* temp = head;

        while (index != count && temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        if (temp != NULL && index == count)
        {
            return temp->val;
        }
        else
        {
            return -1;
        }
    }

    void addAtHead(int val)
    {
        node* n1 = new node(val);

        if (head == NULL)
        {
            head = n1;
        }
        else
        {
            n1->next = head;
            head = n1;
        }
    }

    void addAtTail(int val)
    {
        if (head == NULL)
        {
            addAtHead(val);
        }
        else
        {
            node* n1 = new node(val);
            node* temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = n1;
        }
    }

    void addAtIndex(int index, int val)
    {
        if (index == 0)
        {
            addAtHead(val);
        }
        else
        {
            node* temp = head;
            node* prev = NULL;
            int count = 0;

            while (index != count && temp != NULL)
            {
                prev = temp;
                temp = temp->next;
                count++;
            }

            if (index == count)
            {
                node* n1 = new node(val);

                prev->next = n1;
                n1->next = temp;
            }
            else
            {
                cout << "cannot insert as out of range\n";
            }
        }
    }

    void deleteAtIndex(int index)
    {
        if (head == NULL || index < 0)
        {
            return;
        }

        if (index == 0)
        {
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node* temp = head;
        node* prev = NULL;
        int count = 0;

        while (index != count && temp != NULL)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        if (index == count && temp != NULL)
        {
            prev->next = temp->next;
            delete temp;
        }
    }
};