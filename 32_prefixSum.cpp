// ** Leetcode 1480 - Running sum of 1d array
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=1; i<n; i++){
//             nums[i] += nums[i-1];
//         }
//         return nums;
//     }
// };


// ** Check if array can be partitioned into 2 continous arrays of equal sum
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,5,10,10};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=1; i<n; i++){
//         arr[i] += arr[i-1];
//     }

//     // checking
//     int idx=-1;
//     for(int i=1; i<n; i++){
//         if(2*arr[i] == arr[n-1]){
//             idx=i;
//             break;
//         };
//     }
//     if(idx!=-1) cout<<"yes it can be partitioned at "<<idx;
//     else cout<<"cannot be partitioned";
// }


// ** Leetcode 238 - Product of Array except self
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> pre(n);
//         vector<int> suf(n);
//         vector<int> ans(n);

//         // calculating prefix product array
//         int p = nums[0];
//         pre[0] = 1;
//         for(int i=1; i<n; i++){
//             pre[i] = p;
//             p *= nums[i];
//         }

//         // calculating suffix array
//         p = nums[n-1];
//         suf[n-1] = 1;
//         for(int i=n-2; i>=0; i--){
//             suf[i] = p;
//             p *= nums[i];
//         }

//         // ans array
//         for(int i=0; i<n; i++){
//             ans[i] = pre[i]*suf[i];
//         }
//         return ans;
//     }
// };


// ** Leetcode 2483 :- Minimum penalty for a shop
// class Solution {
// public:
//     int bestClosingTime(string customers) {
        
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n = customers.length();
//         int pre[n+1];   // No.of 'N' before nth hr
//         int suf[n+1];   // No.of 'Y' after and including nth hr
//         pre[0] = 0;
//         // prefix
//         for(int i=0; i<n; i++){
//             // int count = 0;
//             // if(customers[i]=='N') count++;
//             // pre[i+1] = pre[i] + count;
//             pre[i+1] = pre[i] + ((customers[i]=='N') ? 1 : 0);
//         }

//         // sufix
//         suf[n] = 0;
//         for(int i=n-1; i>=0; i--){
//             suf[i] = suf[i+1] + ((customers[i]=='Y') ? 1 : 0);
//         }

//         // finalAns and calculating penalty
//         int minPen = INT_MAX;
//         for(int i=0; i<=n; i++){
//             pre[i] += suf[i];
//             int pen = pre[i];
//             minPen = min(minPen, pen);
//         }

//         // index having first minPenalty 
//         for(int i=0; i<=n; i++){
//             int pen = pre[i];
//             if(pen==minPen) return i;
//         }

//         return n;

//     }
// };


// ** Leetcode 1402 :- Reducing Dishes 
// class Solution {
// public:
//     int maxSatisfaction(vector<int>& satisfaction) {
//         int n = satisfaction.size();
        // sorting
//         sort(satisfaction.begin(),satisfaction.end());
//         int suf[n];
//         suf[n-1] = satisfaction[n-1];
//         for(int i=n-2; i>=0; i--){
//             suf[i] = suf[i+1] + satisfaction[i];
//         }

//         // finding the pivot index
//         // pehla positive number
//         int idx = -1;
//         for(int i=0; i<n; i++){
//            if(suf[i]>=0){
//             idx = i;
//             break;
//            } 
//         }
//         if(idx==-1) return 0;

//         // Max sum of like time coefficient
//         int x = 1;
//         int maxSum = 0;
//         for(int i=idx; i<n; i++){
//             maxSum += satisfaction[i]*x;
//             x++;
//         }

//         return maxSum;
//     }
// };


// ** Leetcode 2389 - Longest subsequence with limited sum

// Method - 1
// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n = nums.size();
//         int m = queries.size();
//         vector<int> ans(m);

//         // sort nums
//         sort(nums.begin(), nums.end());

//         // make nums prefix sum
//         for(int i=1; i<n; i++){
//             nums[i] += nums[i-1];
//         }

//         for(int i=0; i<m; i++){
//             int len = 0;
//             for(int j=0; j<n; j++){
//                 if(nums[j]>queries[i]) break;
//                 else len++;
//             }
//             ans[i] = len;
//         }

//         return ans;
//     }
// };

// Method - 2
// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n = nums.size();
//         int m = queries.size();
//         vector<int> ans(m);

//         // sort nums
//         sort(nums.begin(), nums.end());

//         // make nums prefix sum
//         for(int i=1; i<n; i++){
//             nums[i] += nums[i-1];
//         }

//         for(int i=0; i<m; i++){
//             int maxLen = 0;
//             // binary search
//             int lo = 0;
//             int hi = n-1;
//             while(lo<=hi){
//                 int mid = lo+(hi-lo)/2;
//                 if(nums[mid]>queries[i]) hi = mid-1;
//                 else{   //nums[mid] <= queries[i]
//                     maxLen = mid + 1;
//                     lo = mid + 1;
//                 }
//             }
//             ans[i] = maxLen;
//         }

//         return ans;
//     }
// };
