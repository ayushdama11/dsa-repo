// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;
// void display(queue<int>& q) {
//     int n = q.size();
//     for(int i=1;i<=n;i++) {
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }
// void reverseK(int k, queue<int>& q) {
//     stack<int> st;
//     int n = q.size();

//     // while(k--) {
//     //     int x = q.front();
//     //     q.pop();
//     //     st.push(x);
//     // }

//     for(int i=1; i<=k; i++) {
//         st.push(q.front());
//         q.pop();
//     }

//     while(!st.empty()) {
//         q.push(st.top());
//         st.pop();
//     }


//     for(int i=1; i<=n-k; i++) {
//         int x = q.front();
//         q.pop();
//         q.push(x);
//     }
// }
// int main() {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     display(q);
//     int k = 2;
//     reverseK(k,q);
//     display(q);
// }


// ** leetcode 1700 - Number of Students Unable to Eat Lunch

// ** leetcode 232 - implement queue using stacks

// ** First Negative element in each window of size k
// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;
// int main() {
//     int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     // -4 -4 -7 -9 -9 -9 0 -1   -> ans
//     vector<int> ans;
//     queue<int> q;
//     for(int i=0; i<n; i++) {
//         if(arr[i]<0) q.push(i);
//     }
//     int i = 0;
//     while(i+k<=n) {
//         while(q.size()>0 && q.front()<i) q.pop();
//         if(q.front()>=i+k) ans.push_back(0);
//         else ans.push_back(arr[q.front()]);
//         i++;
//     }
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0; i<ans.size(); i++) {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }

// ** Leetcode 239 - Sliding Window maximum

// ** Leetcode 649 - Dota2 Senate   

// ** Reorder queue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int>& q) {
    int n = q.size();
    for(int i=1;i<=n;i++) {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reorder(queue<int>& q) {
    stack<int> st;
    int n = q.size();
    // pop first half of the q to the st
    for(int i=1; i<=n/2; i++) {
        st.push(q.front());
        q.pop();
    }
    // empty the stack into queue
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
    } 
    // pop 2nd half which is now the 1st half of the q to st
    for(int i=1; i<=n/2; i++) {
        st.push(q.front());
        q.pop();
    }
    // most imp step - interleave one by one 
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // reverse the q using stack
    while(q.size()>0) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
    }
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}


// ** Leetcode 950 - Reveal Cards In Increasing Order