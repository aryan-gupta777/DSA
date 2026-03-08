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
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void inseratposition(Node *tail, Node *&head, int data, int position)
{
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }

    // creating a node for d
    Node *nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next;

    temp->next->prev = nodetoinsert;

    temp->next = nodetoinsert;

    nodetoinsert->prev = temp;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);

    inseratposition(tail, head, 25, 3);
    inseratposition(tail, head, 10, 5);

    cout << "lenght of the linklist : " << getlenght(head) << endl;
    print(head);
}