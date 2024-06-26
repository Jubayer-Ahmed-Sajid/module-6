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
        return;
    }
    else if (head != NULL)
    {

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
};

void print_node(Node *head)
{
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
};

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option:1 Enter new node " << endl;
        cout << "Option 2: Print nodes" << endl;
        cout << "Option 3: Break" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int value;
            cout << "Enter Node ";
            cin >> value;
            insert_at_tai(head, value);
        }
        else if (op == 2)
        {
            print_node(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}