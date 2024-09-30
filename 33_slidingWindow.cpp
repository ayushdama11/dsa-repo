// Sliding Window Algorithm

// ** Maximum sum subarray of size k :-

// Method 1
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] ={7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;  // window
//     int maxSum = INT_MIN;
//     int maxIdx = -1;
//     for(int i=0; i<=n-k; i++){
//         int sum = 0;
//         for(int j=i; j<i+k; j++){
//             sum += arr[j];
//         }
//         // maxSum = max(maxSum, sum);
//         if(maxSum<sum){
//             maxSum = sum;
//             maxIdx = i;
//         }
//     }
//     cout<< maxSum<< endl;
//     cout<< maxIdx;
// }


// Method 2 - ** Using sliding window **
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] ={7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;  // window
//     int maxSum = INT_MIN;
//     int maxIdx = 0;

//     // calculating prevSum
//     int prevSum = 0;
//     for(int i=0; i<k; i++){
//         prevSum += arr[i];
//     }
//     maxSum = prevSum;

//     int i = 1;
//     int j = k;
//     while(j<n){
//         int currSum = prevSum + arr[j] - arr[i-1];
//         if(maxSum<currSum){
//             maxSum = currSum;
//             maxIdx = i;
//         }
//         prevSum = currSum;
//         i++;
//         j++;
//     }

//     // Time complexity - O(N)

//     cout<< maxSum<< endl;
//     cout<< maxIdx;
// }


// ** Leetcode 1052 - Grumpy Bookstore Owner
// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int k = minutes;
//         vector<int>& arr = customers;
//         int n = arr.size();

//         // calculating previous loss and max loss
//         int prevLoss = 0;
//         for(int i=0; i<k; i++){
//             if(grumpy[i]==1) prevLoss += arr[i]; 
//         }
//         int maxLoss = prevLoss;
//         int maxIdx = 0;

//         // to find "index" jaha se k tak hamey uske grump vector ko 0 karna hai 
//         int i = 1;
//         int j = k;
//         while(j<n){
//             int currLoss = prevLoss;
//             if(grumpy[j]==1) currLoss += arr[j];
//             if(grumpy[i-1]==1) currLoss -= arr[i-1];
//             if(maxLoss < currLoss){
//                 maxLoss = currLoss;
//                 maxIdx = i;
//             }
//             prevLoss = currLoss;
//             i++;
//             j++;
//         }

//         // making grumpy vector 0 from idx to k
//         for(int i=maxIdx; i<maxIdx+k; i++){
//             grumpy[i] = 0;
//         }

//         // sum of satisfaction
//         int sum = 0;
//         for(int i=0; i<n; i++){
//             if(grumpy[i]==0) sum+=arr[i];
//         }

//         return sum;
//     }
// }; 


// ** First negative number in every window of size k :-
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] ={2,3,4,4,-7,-1,4,-2,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int k = 2;  // window
//     int p = -1;

//     int ans[n-k+1];

//     // finding the first negative number in the first window
//     for(int i=0; i<k; i++){
//         if(arr[i]<0){
//             p = i;
//             break;
//         }
//     }
//     if(p==-1) ans[0] = 1;
//     else ans[0] = arr[p];

//     // sliding window
//     int i = 1;
//     int j = k;
//     while(j<n){
//         if(p>=i) ans[i] = arr[p];
//         else {      // means p jo hai wo current window se bahar chala gaya hai - islie ab waps naya negative indx find karege
//             p = -1;
//             for(int x=i; x<=j; x++){
//                 if(arr[x]<0) {
//                     p = x;
//                     break;
//                 }
//             }
//             if(p!=-1) ans[i] = arr[p];
//             else ans[i] = 1;
//         }
//         i++; 
//         j++; 
//     }

//     for(int i=0; i<n-k+1; i++){
//         cout<<ans[i]<<" ";
//     }
// }


// ** Minimum size subarray sum - Leetcode 209
// class Solution {
// public:
//     // Sliding window method
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         int j = 0;
//         int minLen = INT_MAX;
//         int len;
//         int sum = 0;

//         while(j<n){
//             sum += nums[j];
//             while(sum >= target){
//                 len = j-i+1;
//                 minLen = min(minLen, len);
//                 sum -= nums[i];
//                 i++;
//             }
//             j++;
//         }
//         if(minLen == INT_MAX) return 0;
//         else return minLen;
//     }
// };


// ** Leetcode 1004. Max Consecutive Ones
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n = nums.size();
//         int flips = 0, i=0, j=0;
//         int maxLen = INT_MIN, len = INT_MIN;
//         while(j<n){
//             if(nums[j]==1) j++;
//             else{   // nums[j] == 0
//                 if(flips<k) {
//                     flips++;
//                     j++;
//                 }
//                 else{   // flips == k
//                 // calculate length
//                     len = j - i;
//                     maxLen = max(maxLen,len);
//                     // i ko just aage wale zero se ek index aage lee jao
//                     while(nums[i]==1) i++;      // after this 100% nums[i] = 0
//                     i++;    // ab wo zero k aage agya
//                     j++;
//                 }
//             }
//         }
//         len = j-i;
//         maxLen = max(maxLen, len);
//         return maxLen;
//     }
// };


// ** Leetcode 1493 Longest Subarray of 1's After Deleting One Element
// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n = nums.size();
//         int flips = 0;
//         int k = 1;
//         int i = 0, j = 0;
//         int maxLen = INT_MIN , len = INT_MIN ;

//         // sliding window
//         while(j < n){
//             if(nums[j]==1) j++;
//             else {  // nums[j] == 0
//                 if(flips<k){
//                     flips++;
//                     j++;
//                 } else {    // flips = k
//                     len = j - i;
//                     maxLen = max(maxLen, len);

//                     // i ko piche lana hai 
//                     while(nums[i]==1) i++;
//                     i++;
//                     j++;
//                 }
//             }
//         }
//         len = j - i;
//         maxLen = max(maxLen ,len);
//         return maxLen-1;
//     }
// };


// ** Leetcode 713 - Subarray Product less than k
// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n = nums.size();
//         if(k<=1) return 0;
//         int i = 0;
//         int j = 0;
//         int count = 0;
//         int product = 1;
//         while(j<n){
//             product *= nums[j];
//             while(product>=k){
//                 count += j-i;
//                 product /= nums[i];
//                 i++;
//             }
//             j++;
//         }
//         while(i<n){
//             count += j-i;
//             product /= nums[i];
//             i++;
//         }
//         return count;
//     }
// };