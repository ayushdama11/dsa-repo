// doubly linked list class
#include <iostream>
using namespace std;

class Node {    // dll node
    public:
        int val;
        Node* next;
        Node* prev;     // extra for dll
        Node(int val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;      // extra for dll
        }
};

class DLL {  // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    // constructor
    DLL() {
        head = tail = NULL;
        size = 0;  
    }

    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            temp -> next = head;
            head -> prev = temp;    // extra
            head = temp;
        }
        size++;
    }
  
    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail -> next = temp;
            temp -> prev = tail;    // extra
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
            t->prev = temp;     // extra
            t->next->prev = t;  // extra
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
            if(idx<size/2) {
                Node* temp = head;
                for(int i=1; i<=idx; i++) {
                    temp = temp->next;
                }
                return temp->val; 
            }  
            else {  // idx is greater than size/2 - piche se traverse krege tab
                Node* temp = tail;
                for(int i=1; i<size-idx; i++) {
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }

    void deleteAtHead() {   
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;   // extra
        if(head==NULL) tail = NULL;     // extra
        size--;
    }

    void deleteAtTail() {
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        else if(size==1) {      // extra
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
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
            temp->next->prev = temp;    // extra
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(50);
    list.display();
    list.InsertAtIdx(2,60);
    list.display();

    // list.deleteAtTail();
    // list.display();

    // list.deleteAtHead();
    // list.display();

    // list.deletetAtIdx(2);
    // list.display();

    cout<<list.getAtIdx(2)<<endl;   // 30
    cout<<list.getAtIdx(4)<<endl;
    
}