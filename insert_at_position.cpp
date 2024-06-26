#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tai(Node *&head, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        cout<<endl<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }
    else if (head != NULL)
    {

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout<<endl<<endl<<"inserted at tail"<<endl<<endl;
    }
};

void print_node(Node *head)
{
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at postion" << " " << pos << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option:1 Enter new node " << endl;
        cout << "Option 2: Print nodes" << endl;
        cout << "Option 3: Enter at postion" << endl;
        cout << "Option 4: Break" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int value;
            cout << "Enter value ";
            cin >> value;
            insert_at_tai(head, value);
        }
        else if (op == 2)
        {
            print_node(head);
        }
        else if (op == 3)
        {
            int pos;
            cout << "Enter position ";
            cin >> pos;
            int val;
            cout << "Enter Value ";
            cin >> val;
            insert_at_any_position(head, pos, val);
        }
        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}