#include <iostream>
using namespace std;

class Node {    // User defined data type
    public:
        int val;
        Node* next;
        Node(int val) {
            this -> val = val;
            this -> next = NULL;
        }
};

class LinkedList {  // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    // constructor
    LinkedList() {
        head = tail = NULL;
        size = 0;  
    }

    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            temp -> next = head;
            head = temp;
        }
        size++;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail -> next = temp;
            tail = temp;
        }
        size++;
    }

    void InsertAtIdx(int idx, int val) {
        if(idx<0 || idx>size) cout<<"Invalid index"<<endl;
        else if(idx==0) insertAtHead(val);  // ye already size++ karne wala hai 
        else if(idx==size) insertAtTail(val); // ye already size++ karne wala hai 
        else {
            Node* t = new Node(val);
            Node* temp = head;  // traverse karega till idx-1
            // temp ko idx-1 tak le aao , 1 se islie start kia hai loop ko kyuki agar 0 hoga to uske lie hamne pehle hi condition likh di haii
            for(int i=1; i<=idx-1; i++) {
                temp = temp -> next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx) {
        if(idx<0 || idx>=size) {
            cout<< "invalid index";
            return -1;
        }
        else if (idx==0) return head->val;
        else if (idx==size-1) return tail->val;
        else {
            Node* temp = head;
            for(int i=1; i<=idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead() {
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail() {
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next != tail) temp=temp->next;
        temp -> next = NULL;
        tail = temp;
        size--;
    }

    void deletetAtIdx(int idx) {
        if(idx<0 || idx>=size) {
            cout<<"invalid index"<<endl;
            return;
        }
        else if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else {
            Node* temp = head;
            // temp ko idx-1 tak traverse kar ke le jaoo
            for(int i=1; i<=idx-1; i++) {
                temp = temp -> next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
    LinkedList ll;      // { }

    ll.insertAtTail(10);    
    ll.display();  // {10->NULL}

    ll.insertAtTail(20);     
    ll.display();   // {10 -> 20 -> NULL}

    ll.insertAtHead(30);
    ll.display(); 

    ll.insertAtHead(40);
    ll.display(); 

    ll.InsertAtIdx(4,80);
    ll.display();

    cout<< ll.getAtIdx(3)<<endl;
 
    cout<< ll.size<< endl;

    ll.deleteAtHead();
    ll.display();

    cout<<ll.size<<endl;

    ll.deleteAtTail();
    ll.display();

    cout<<ll.size<<endl;

    ll.deletetAtIdx(1);
    ll.display();

    cout<<ll.size<<endl;


    return 0;
}