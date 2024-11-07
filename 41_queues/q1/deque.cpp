// design a deque - with doubly linked list
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

class Deque {  // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    // constructor
    Deque() {
        head = tail = NULL;
        size = 0;  
    }

    void pushfront(int val) {   // insertAtHead
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            temp -> next = head;
            head -> prev = temp;    // extra
            head = temp;
        }
        size++;
    }
  
    void pushback(int val) {    // insertAtTail
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail -> next = temp;
            temp -> prev = tail;    // extra
            tail = temp;
        }
        size++;
    }

    void popfront() {     // deleteAtHead
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;   // extra
        if(head==NULL) tail = NULL;     // extra
        size--;
    }

    void popback() {    // deleteAtTail
        if(size==0) {
            cout<<"list is empty"<<endl;
            return;
        }
        else if(size==1) {      // extra
            popfront();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--; 
    }

    int front() {
        if(size==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int back() {
        if(size==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return tail->val;
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
    Deque dq;
    // push , pop , front , back , size , empty
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.display();
    dq.popback();
    dq.display();
    dq.popfront();
    dq.display();
    dq.pushfront(50);
    dq.display();
}