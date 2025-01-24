// #include <iostream>
// #include <set>
// #include <map>
// using namespace std;
// int main() { 
//     // set<int> s;
//     // s.insert(5);
//     // s.insert(3);
//     // s.insert(7);
//     // for(int ele : s) {
//     //     cout<<ele<<" ";
//     // }

//     map<int, int> m;
//     m[1] = 30;
//     m[20] = 20;
//     m[3] = 10;
//     for(auto x : m) {
//         cout<<x.first<<" "<<x.second<<endl;
//     }
// }


// ** Top view of binary tree 

#include <iostream>
#include <climits>
#include <algorithm>
#include <queue>
#include <unordered_map>

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

// void levelOrderQueue(Node* root) {
//     queue<Node*> q;
//     q.push(root);
//     while(q.size()>0) {
//         Node* temp = q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
//     cout<<endl;
// }

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


// ** top view
void topview(Node* root) {
    unordered_map<int, int> m;      // level, root->val
    queue< pair<Node*, int> > q;    // queue of pairs - <Node, level> 
    pair<Node*, int> r;
    r.first = root;
    r.second = 0;   // level
    q.push(r);
    m[0] = root->val;
    while(q.size()>0) {
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(m.find(level)==m.end()) {
            m[level] = temp->val;    // na mile to hi insert karna hai
        } 
        if(temp->left!=NULL) {
            pair<Node*, int> p;
            p.first = temp->left;
            p.second = level-1;
            q.push(p);
        }
        if(temp->right!=NULL) {
            pair<Node*, int> p;
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto x : m) {
        int level = x.first;
        minLevel = min(minLevel, level);
        maxLevel = max(maxLevel, level);
    }
    for(int i=minLevel; i<=maxLevel; i++) {
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

// to reverse the printing of the elements in tree using queue
int main() {
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    // construct
    Node* root = construct(arr,n);

    levelorder(root);

    topview(root);
}


