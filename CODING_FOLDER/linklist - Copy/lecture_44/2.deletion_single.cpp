#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    /*
    destructor
    ~Node()
    {
        int value = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "memory is free for node with data " << value << endl;
    }
*/

    // can also use this code for destructor
    ~Node()
    {
        delete next;

        cout << "memory is free for node with data " << this->data << endl;
    }
};

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void insertathead(Node *&head, int d)
{
    // new node created

    Node *temp = new Node(d); // data inserted in a new node
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d); // data inserted in a new node
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "LIST IS EMPTY";
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    // insertathead(head, 10);
    // insertathead(head, 20);
    // insertathead(head, 30);

    insertattail(tail, 20);
    insertattail(tail, 30);
    insertattail(tail, 40);

    print(head);

    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;

    deleteNode(1, head);
    print(head);
}