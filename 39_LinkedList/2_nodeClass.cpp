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

int main() {
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming ll
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // accesing value of b using a 
    // a.next->val = 70;    // value updation
    // cout<<a.next->val<<" ";

    // accesing c
    // cout<<((a.next)->next)->val<<" ";

    // accesing d
    // cout<<(((a.next)->next)->next)->val<<" ";

    // prinitng ll using loop
    Node temp = a;  // a ka value aur a ka next dono temp me chhale gya
    while(1) {
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }

    return 0;
}