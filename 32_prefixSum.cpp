// ** Leetcode 1480 - Running sum of 1d array
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
         // tc = o(n), sc = o(1)
//         int n = nums.size();
//         for(int i=1; i<n; i++){
//             nums[i] += nums[i-1];
//         }
//         return nums;
//     }
// };

// ** Check if array can be partitioned into two continous arrays of equal sum
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,5,10};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     // creating prefix sum array
//     for(int i=1; i<n; i++){
//         arr[i] += arr[i-1];
//     }
//     // check if any x exists
//     int idx = -1;
//     for(int i=1; i<n; i++){
//         if(2*arr[i]==arr[n-1]){
//             idx=i;
//             break;
//         }
//     }
//     if(idx!=1) cout<<"yes it can be partitioned at "<<idx;
//     else cout<<"cannot be partitioned";
// }


// ** Product of Array except self :- Leetcode 238
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> pre(n);
//         vector<int> suf(n);
//         vector<int> ans(n);

        // calculating prefix product array
//         int p = nums[0];
//         pre[0] = 1;
//         for(int i=1; i<n; i++){
//             pre[i] = p;
//             p *= nums[i];
//         }

        // calculating suffix array
//         p = nums[n-1];
//         suf[n-1] = 1;
//         for(int i=n-2; i>=0; i--){
//             suf[i] = p;
//             p *= nums[i];
//         }

        // ans array
//         for(int i=0; i<n; i++){
//             ans[i] = pre[i]*suf[i];
//         }
//         return ans;
//     }
// };

