#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        delete next;
    }
};

void insertattail(Node *&tail, int element, int data)
{

    // empty list
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletenode(Node *&tail, int value)
{

    if (tail == NULL)
    {
        // for empty list
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        // non empty
        // assuming that "value" is present in the Linked List

        Node *prev = tail;
        Node *curr = prev->next;

        // Find previous node of the node to delete
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node
        if (curr == prev)
        {
            tail = NULL;
        }
        // >=2 node - if deleting tail
        else if (tail == curr)
        {
            tail = curr->next;  // or tail=prev
        }

        curr->next = NULL;
        delete curr;
    }
}
bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

void print(Node *tail)
{
    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

int main()
{

    Node *tail = NULL;

    insertattail(tail, 5, 7);
    print(tail);

    insertattail(tail, 7, 9);
    print(tail);

    insertattail(tail, 9, 10);
    print(tail);

    insertattail(tail, 10, 14);
    print(tail);
    insertattail(tail, 9, 5);
    print(tail);

    deletenode(tail, 7);
    print(tail);
}