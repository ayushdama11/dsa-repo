// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;
// void display(queue<int>& q) {
//     int n = q.size();
//     for(int i=1; i<=n; i++) {
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }
// void reverse(queue<int>& q) {
//     stack<int> st;
//     // empty the queue into stack
//     while(!q.empty()) {
//         int x = q.front();
//         q.pop();
//         st.push(x);
//     }
//     // empty the stack into queue
//     while(!st.empty()) {
//         int x = st.top();
//         st.pop();
//         q.push(x);
//     }
// }
// int main() {
//     queue<int> q;
//     // push , pop , front , back , size , empty
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     // cout<<q.size()<<endl;
//     // cout<<q.front()<<endl;    // 10
//     // cout<<q.back()<<endl;    // 50
//     // q.pop();
//     // cout<<q.front()<<endl;    // 20
//     // cout<<q.back()<<endl;    // 50

//     display(q);
//     reverse(q);
//     display(q);
// }



// ** Remove all the elements present at the even index posns considering 0th index
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int>& q) {
    int n = q.size();
    for(int i=1; i<=n; i++) {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void removeAtEven(queue<int> &q) {
    int n = q.size();
    for(int i=0;i<n;i++) {
        if(i%2==0) q.pop();
        else {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main() {
    queue<int> q;
    // push , pop , front , back , size , empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    
    removeAtEven(q);
    display(q);
}