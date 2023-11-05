#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Deleting node with value : " << val << endl;
    }
};

void insertNode(Node *&tail, int elem, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        Node *curr = tail;

        while (curr->data != elem)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node*&tail, int val){

    if(tail == NULL){
        cout << "List is empty"<<endl;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr -> data != val)
        {   
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        if(curr == prev){
            tail = NULL;
        }

        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
        
    }
}

void print(Node *&tail)
{
    Node *temp = tail;

    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail  != temp);
    cout << endl;
}

bool detectloop(Node *&head){

    if(head == NULL)
        return false;

    map<Node*,bool> visited;
    Node *temp = head;

    while(temp != NULL){

        // cycle is present
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;
    
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
         fast = fast ->next;
         if(fast !=  NULL){
            fast = fast -> next;
         }
         slow = slow -> next;

         if(slow == fast){
            cout << "Present at element " << slow -> data << endl;
            return slow;
         }
    }
    return NULL;
}

Node* getStartingNode (Node *head) {
    
    if(head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);

    if(intersection == NULL) 
        return NULL;
    Node *slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

Node* removeLoop (Node *head) {
        if(head == NULL)
            return NULL;
        
        Node* startOfLoop = getStartingNode(head);

        if(startOfLoop == NULL)
         return head;
        Node *temp = startOfLoop;

        while(temp -> next != startOfLoop) {
            temp = temp -> next;
        }

        temp -> next = NULL;

        
}
int main()
{
    // Node *node1 = new Node(10);
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    // insertNode(tail, 3, 5);
    // print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 7, 9);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);
    return 0;
}