// ** Valid Paranthesis - leetcode 20
// class Solution {
// public:
//     bool isValid(string s) {
//         if(s.length()%2 != 0) return false;
//         else {
//             stack<int> st;
//             for(int i=0; i<s.length(); i++) {
//                 if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
//                 else if(s[i]==')' && !st.empty() && st.top()=='(') st.pop();
//                 else if(s[i]=='}' && !st.empty() && st.top()=='{') st.pop();
//                 else if(s[i]==']' && !st.empty() && st.top()=='[') st.pop();
//                 else return false;
//             }
//             if(st.empty()) return true;
//             else return false;
//         }
        
//     }
// };


// ** Largest rectangle in histogram - leetcode 84
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& arr) {
//         int n = arr.size();

//         // next smallest index
//         int nsi[n];
//         stack<int> st;
//         nsi[n-1] = n; 
//         st.push(n-1);   // push the index
//         for(int i = n-2; i>=0; i--) {
//             while(st.size()>0 && arr[st.top()] >= arr[i]) {
//                 st.pop();
//             }
//             if(st.empty()) nsi[i] = n;
//             else nsi[i] = st.top();
//             st.push(i);
//         }

//         // previous smaller index
//         int psi[n];
//         stack<int> gt;
//         psi[0] = -1; 
//         gt.push(0);   // push the index
//         for(int i=1; i<n; i++) {
//             while(gt.size()>0 && arr[gt.top()] >= arr[i]) {
//                 gt.pop();
//             }
//             if(gt.empty()) psi[i] = -1;
//             else psi[i] = gt.top();
//             gt.push(i);
//         }

//         // loop calculating max area
//         int maxArea = 0;
//         for(int i=0; i<n; i++) {
//             int height = arr[i];
//             int breadth = nsi[i] - psi[i] - 1;
//             int area = height * breadth;
//             maxArea = max(maxArea,area);
//         }

//         return maxArea;
//     } 
// };


// ** Number of visisble people in a queue - leetcode 1944
// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> ans(n,0);
//         stack<int> st;
//         st.push(arr[n-1]);
//         ans[n-1] = 0;
//         for(int i=n-2; i>=0; i--) {
//             int count = 0;
//             while(!st.empty() && st.top()<arr[i]) { 
//                 st.pop(); 
//                 count++;
//             }
//             // ye basically tab hi karna hai jab stck khali na ho 
//             if(!st.empty()) count++;      // kyuki wo khudko bhi dekh ra hai 
//             ans[i] = count;     // if stack empty hai
//             st.push(arr[i]);
//         }
//         return ans;
//     }
// };


// ** Sliding window maximum - leetcode 239
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         if(k==1) return arr;
//         int n = arr.size();
//         int ngi[n];
//         stack<int> st;
//         // making ngi array
//         ngi[n-1] = n;
//         st.push(n-1);
//         for(int i=n-2; i>=0; i--) {
//             while(st.size()>0 && arr[st.top()]<=arr[i]) {
//                 st.pop();
//             }
//             if(st.size()==0) ngi[i] = n;
//             else ngi[i] = st.top();
//             st.push(i);
//         }

//         // checking in window 
//         vector<int> ans;
//         int j = 0;  // taaki ham jis index pe while loop break kre - exact whi mera j rehna chahie
//         for(int i=0; i<(n-k+1); i++) {  // total windows = n-k+1
//             if(j<i) j = i;
//             int mx = arr[j];    // starting of window
//             while(j < i+k) {   // if next greater element is inside window 
//                 mx = arr[j];
//                 if(ngi[j] >= i+k) break;    // window k agr bahar hai to break kardo
//                 j = ngi[j];
//             }
//             ans.push_back(mx);
//         }
//         return ans;
//     }
// };


// ** Min Stack - leetcode 155
// class MinStack {
// public:
//     // method 4 - using two variables
//     stack<long long> st;
//     long long min;
//     MinStack() {    // constructor
//         min = LLONG_MAX;
//     }
    
//     void push(int val) {
//         long long x = (long long) val;
//         if(st.empty()) {
//             st.push(x);
//             min = x;
//         }
//         else if(x>=min) st.push(x);
//         else {      // val < min
//             // then farzi min ko push kardo
//             st.push(2*x-min);
//             min = x;
//         }
//     }
    
//     void pop() {
//         if(st.top() < min) {
//             // st.top() < min - [ not possible ] - a fake value is present
//             // before popping make sure to retrieve the old min
//             long long oldMin = 2*min - st.top();
//             min = oldMin;
//         }
//         st.pop();   // dono me chalega > min aur, < min
//     }
    
//     int top() {
//         if(st.top() < min) return (int)min;
//         else return (int)st.top();
//     }
    
//     int getMin() {      // tc = O(1)
//         return (int)min;
//     }

// };


