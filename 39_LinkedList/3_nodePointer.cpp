#include <iostream>
using namespace std;

class Node {
    public:
        int val;
        Node* next; // a pointer storing the value of the next node's value
        Node(int val) {
            this -> val = val;
            // intially the next should be pointed to null
            this -> next = NULL;
        }
};

// a node se puri linked list print karva rae hai 
void display(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<" "; 
        temp = temp->next;
    }
    cout<<endl;
}

// displaying a size of ll
int size(Node* head) {
    Node* temp = head;
    int n = 0;
    while(temp!=NULL) {
        n++;
        temp = temp->next;
    }
    return n;
}

// displaying ll recursively
void displayrec(Node* head) {
    if(head == NULL) return;
    cout<< head->val<< " ";
    displayrec(head->next);
}

// reverse display of ll
void revdisplayrec(Node* head) {
    if(head == NULL) return;
    revdisplayrec(head -> next);
    cout<<head->val<<" ";
}

// insertAtEnd()
void insertAtEnd(Node* head, int val) {
    Node* t = new Node(val);
    // head ko last tak lle aao 
    while(head->next != NULL) head = head -> next;
    head -> next = t;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = e;

    cout<<a->next->next->val<<endl; // 30
    // cout<<((*a).next)->next->val<<endl; // 30

    Node* temp = a;
    while(temp!=NULL) {
        cout<<temp->val <<" ";
        temp = temp -> next;
    }
    cout<<endl;

    display(b);

    cout<<size(a)<<endl;  // 5

    // Recursive display of ll
    displayrec(a);
    cout<<endl;

    revdisplayrec(a);
    cout<<endl;

    insertAtEnd(a, 80);
    display(a);

    return 0;
}