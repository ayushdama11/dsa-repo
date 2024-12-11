// ** DFS - Depth first search 

#include <iostream>
#include <climits>
#include <algorithm>
#include <queue>

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

void preorder(Node* root) {     // print left right
    if(root==NULL) return; 
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(Node* root) { 
    if(root==NULL) return; 
    postorder(root->left); 
    postorder(root->right); 
    cout<<root->val<<" "; 
} 

// ** print the elements at the nth level 
void nthLevel(Node* root, int curr, int level) {     // print left right 
    if(root==NULL) return; 
    if(curr==level) { 
        cout<<root->val<<" "; 
        return;     // optimization 
    } 
    nthLevel(root->left, curr+1, level); 
    nthLevel(root->right, curr+1, level); 
} 

void nthLevelRev(Node* root, int curr, int level) {
    if(root==NULL) return ;
    if(curr==level) {
        cout<<root->val<<" ";
        return;
    }
    nthLevelRev(root->right, curr+1, level);    // first print right than left
    nthLevelRev(root->left, curr+1, level);
}


// ** LEVEL ORDER TRAVERSAL
int levels(Node* root) {
    if(root==NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
void levelorder(Node* root) { 
    int n = levels(root); 
    for(int i=1; i<=n; i++) { 
        nthLevel(root, 1, i); 
    } 
} 

// ** Level order using queue   - **** BFS ****
void levelOrderQueue(Node* root) {
    queue<Node*> q;
    q.push(root);
    while(q.size()>0) {
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
// to reverse the printing of the elements in tree using queue
void levelOrderQueueRev(Node* root) {
    queue<Node*> q;
    q.push(root);
    while(q.size()>0) {
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) q.push(temp->right);
        if(temp->left!=NULL) q.push(temp->left);
    }
    cout<<endl;
}


int main() {
    Node* a = new Node(1);      // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    
    a->left = b;
    a->right = c; 
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    preorder(a);
    cout<<endl;

    inorder(a);
    cout<<endl;

    postorder(a);
    cout<<endl;

    nthLevel(a,1,3);
    cout<<endl;

    levelorder(a);
    cout<<endl;

    nthLevelRev(a,1,3);
    cout<<endl;

    levelOrderQueue(a);

    levelOrderQueueRev(a);
}


