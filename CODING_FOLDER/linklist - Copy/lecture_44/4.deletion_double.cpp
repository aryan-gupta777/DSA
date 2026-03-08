#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        delete next;
    }
};

// traverse
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives lenght of linklist
int getlenght(Node *&head)
{
    int lenght = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        lenght++;
        temp = temp->next;
    }
    return lenght;
}

void insertathead(Node *&head, int data)
{

    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void deletion(Node *&head, int position)
{
    // Empty list
    if (head == NULL)
        return;

    // Delete first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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

        // deleting mid node and last node

        prev->next = curr->next;
        if (curr->next != NULL)   // checking if the node is last or not 
            curr->next->prev = prev;
        curr->prev = NULL;
        curr->next = NULL;

        
        delete curr;
       
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    insertattail(tail, 0);

    deletion(head, 5);

    cout << "lenght of the linklist : " << getlenght(head) << endl;

    print(head);
}