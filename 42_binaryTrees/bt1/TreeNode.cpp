#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

class Node {    // tree node
public :
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayTree(Node* root) {
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
} 

int sum(Node* root) { 
    if(root==NULL) return 0;
    // int leftSum = sum(root->left);
    // int rightSum = sum(root->right);
    // int ans = root->val + leftSum + rightSum;
    // return ans;
    return root->val + sum(root->left) + sum(root->right);
}

int product(Node* root) {
    if(root==NULL) return 1;
    int lprod = product(root->left);
    int rprod = product(root->right);
    int product = root->val * lprod * rprod;
    return product;
}

int size(Node* root) {      // size is basically number of nodes in the tree
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);        // 1 for root
}

int maxInTree(Node* root) {
    if(root==NULL) return INT_MIN;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->val, max(lMax,rMax));
}

int levels(Node* root) {
    if(root==NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));    // 1 is for the root
}

int main() {
    Node* a = new Node(1);      // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(15);
    Node* f = new Node(6);
    Node* g = new Node(7);
    
    a->left = b;
    a->right = c; 
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
    cout<<endl;

    cout<<sum(a)<<endl;   // 28

    cout<<size(a)<<endl;      // 7

    cout<<maxInTree(a)<<endl;   // 7

    cout<<product(b)<<endl;     // 120

    cout<<levels(a)<<endl;      // 3

}


