#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {

        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;

        if( next != NULL){
            delete next;
            next = NULL;
        }

        cout << "Memory free for data : " << val << endl;
    }
};

// Traverse L. L.
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

int getLength(Node *&head)
{

    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{

    // empty list
    if (head == NULL)
    {

        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{

    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {

        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPos(Node *&head, Node *&tail, int pos, int d)
{

    if (pos == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}



void deleteNode(Node *&head, int pos)
{

    // deleting first or start node
    if (pos == 1)
    {
        Node *temp = head;
        temp->next -> prev= NULL;
        head = temp->next;
        temp -> next = NULL;
        // memory free start node
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    // Node *node1 = new Node(10);
    Node *head = NULL; // if one node bhi not present
    Node *tail = NULL;

    // print(head);

    insertAtHead(head, tail, 5);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl << endl;

    insertAtTail(head, tail, 20);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl<< endl;

    insertAtPos(head, tail, 3, 15);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl<< endl;

    deleteNode(head, 3);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl<< endl;

    cout << "Length is : " << getLength(head) << endl;

    return 0;
}