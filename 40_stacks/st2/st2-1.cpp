// ** Balanced brackets
// #include <iostream>
// #include <stack>
// using namespace std;
// bool isBalanced(string s) {
//     if(s.length()%2!=0) return false;
//     stack<char> st;
//     for(int i=0; i<s.length(); i++) {
//         if(s[i]=='(') st.push(s[i]);
//         else { // s[i] = ')'
//             if(st.size()==0) return false;
//             else st.pop();
//         }
//     }
//     if(st.size()==0) return true;
//     else return false;
// }
// int main() {
//     string s = "()(()))()";
//     cout<<isBalanced(s);
// }


// ** Remove consecutive duplicates from string
// #include <iostream>
// #include <stack>
// #include <algorithm>
// using namespace std;
// string removeDuplicates(string s) {
//     stack<char> st;
//     st.push(s[0]);
//     for(int i=0; i<s.length(); i++) {
//         if(s[i]!=st.top()) st.push(s[i]);
//     }
//     s = ""; 
//     while(st.size()>0) { 
//         s += st.top(); 
//         st.pop(); 
//     } 
//     reverse(s.begin(), s.end()); 
//     return s; 
// } 
// int main() { 
//     string s = "aaabbcddaabffg"; 
//     cout<<s<<endl; 
//     s = removeDuplicates(s); 
//     cout<<s<<endl; 
// } 


// ** Next Greater Element ** 
// #include <iostream>
// #include <stack>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {3,1,2,7,4,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


//     // ** brute force - tc=O(N^2) sc-O(1)
//     // int nge[n];
//     // for(int i=0; i<n; i++) {
//     //     nge[i] = -1;
//     //     for(int j=i+1; j<n; j++) {
//     //         if(arr[j]>arr[i]) {
//     //             nge[i] = arr[j];
//     //             break;  
//     //         }
//     //     }
//     // }
//     // for(int i=0; i<n; i++) {
//     //     cout<<nge[i]<<" ";
//     // }

//     // ** using a stack - tc=O(N)
//     // POP ANS PUSH
//     int nge[n];
//     for (int i = 0; i < n; i++) {
//         nge[i] = -1;  
//     }
//     stack<int> st;
//     st.push(arr[n-1]);
//     for(int i=n-2; i>=0; i--) {
//         // pop all the ele smaller than arr[i]
//         while(!st.empty() && st.top()<=arr[i]) {
//             st.pop();
//         }

//         // mark the ans in nge  
//         if(st.empty()) nge[i] = -1;
//         else nge[i] = st.top();

//         // push the arr[i]
//         st.push(arr[i]);
//     }

//     for(int i=0; i<n; i++) {
//         cout<<nge[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


// ** Previous greater element
// #include <iostream>
// #include <stack>
// #include <algorithm>
// using namespace std;
 
// int main() {
//     int arr[] = {3,1,2,7,4,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // ** using a stack - tc=O(N)
//     // POP ANS PUSH
//     int pge[n];
//     pge[0] = -1;
//     stack<int> st;
//     st.push(arr[0]);
//     for(int i=1; i<=n-1; i++) {
//         // pop all the ele smaller than arr[i]
//         while(!st.empty() && st.top()<=arr[i]) {
//             st.pop();
//         }

//         // mark the ans in nge  
//         if(st.empty()) pge[i] = -1;
//         else pge[i] = st.top();

//         // push the arr[i]
//         st.push(arr[i]);
//     }

//     for(int i=0; i<n; i++) {
//         cout<<pge[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


// ** Stock span problem 
#include <iostream>
#include <stack>
using namespace std;
int main() {
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    stack<int> st;
    int pgi[n];
    pgi[0] = 1;
    st.push(0);     // first index
    for(int i=1; i<=n-1; i++) {
        while(st.size()>0 && arr[st.top()]<=arr[i]) {
            st.pop();
        }
        // mark the ans in pge array
        if(st.empty()) pgi[i] = -1;
        else pgi[i] = st.top();

        // filling span in pgi
        pgi[i] = i-pgi[i];

        // push the ele
        st.push(i);
    }

    // filling span
    // for(int i=0; i<n; i++) {
    //     pgi[i] = i - pgi[i];
    // }

    for(int i=0; i<n; i++) {
        cout<<pgi[i]<<" ";
    }
    cout<<endl;

    return 0;
}



