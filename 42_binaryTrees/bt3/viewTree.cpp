// ** Views of tree

// ** Boundary traversal

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

// ** Constructing a tree
Node* construct(int arr[], int n) {
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1; 
    int j = 2;
    while(q.size()>0 && i<n) {
        Node* temp = q.front(); 
        q.pop();

        Node* l;    // left 
        Node* r;    // right
        if(arr[i]!=INT_MIN) l = new Node(arr[i]); 
        else l = NULL; 
        if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);   // j!=n matlab agr mera j jo hai wo n k barabar ho jae aur i n-1 rahe tab kuch nai karna hai r me 
        else r = NULL; 

        temp -> left = l;
        temp -> right = r;

        // queue me push back tabhi karna hai jab mera l ya r null na ho 
        if(l!=NULL) q.push(l); 
        if(r!=NULL) q.push(r); 

        i += 2; 
        j += 2;

    }
    return root;  
}

void nthLevel(Node* root, int curr, int level) {     // print left right
    if(root==NULL) return; 
    if(curr==level) {
        cout<<root->val<<" ";
        return;     // optimization
    }
    nthLevel(root->left, curr+1, level);
    nthLevel(root->right, curr+1, level);
} 
int levels(Node* root) {
    if(root==NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
void levelorder(Node* root) { 
    int n = levels(root); 
    for(int i=1; i<=n; i++) { 
        nthLevel(root, 1, i); 
        cout<<endl;
    } 
} 

// ** Boundary functions
void leftboundary(Node* root) {     
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;   // leaf node se pehle hi return krado
    cout<<root->val<<" ";
    leftboundary(root->left); 
    if(root->left==NULL) leftboundary(root->right);     // right sirf tab jaege jab mera left me koi bhi element pada na ho 
}

void bottomboundary(Node* root) {       // leaf node 
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomboundary(root->left);
    bottomboundary(root->right);
}

void rightboundary(Node* root) {    // it will start from right node of root
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    // printing will be done at the lst because we have to print the right boundary in reverse order
    rightboundary(root->right);
    if(root->right==NULL) rightboundary(root->left);
    cout<<root->val<<" ";   
}

void boundary(Node* root) {
    leftboundary(root); 
    bottomboundary(root);
    rightboundary(root->right);
}


// to reverse the printing of the elements in tree using queue
int main() {
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);

    // construct
    Node* root = construct(arr,n);
    
    // boundary traveral
    boundary(root);
}


