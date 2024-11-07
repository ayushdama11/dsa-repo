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

class Queue {  // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    // constructor
    Queue() {
        head = tail = NULL;
        size = 0;  
    }

    void push(int val) {    // insertAtTail
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail -> next = temp;
            tail = temp;
        }
        size++;
    }

    void pop() {   // deleteAtHead
        if(size==0) {
            cout<<"queue is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        size--;
        delete(temp);   // wastage nai horai hai , node chale jaega 
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

    int sizeQ() {
        return size;
    }

    bool empty() {
        if(size==0) return true;    // size variable not the function
        else return false;
    }
};

int main() {
    Queue q;
    // push , pop , front , back , size , empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}