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
};

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

void insertatposition(Node* &tail,Node *&head, int position, int d)
{
   //insert at start
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    int cnt = 1;
    Node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    //insert at end
    if(temp->next==NULL){
      insertattail(tail,d);
      return;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
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

    insertatposition(tail,head, 5, 44);

    print(head);
    
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
}