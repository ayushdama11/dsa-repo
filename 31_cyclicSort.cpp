// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {4,1,6,2,5,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

    // cycle sort
//     int i = 0;
//     while(i<n){
//         int correctIdx = arr[i]-1;
//         if(i==correctIdx) i++;
//         else swap(arr[i],arr[correctIdx]);
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// ** Missing Number - Leetcode 268
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
        // cyclic sort
//         int n=nums.size();
//         int i=0;
//         while(i<n){
//             int correctIdx = nums[i];
//             if(correctIdx==i || nums[i]==n) i++;
//             else swap(nums[i],nums[correctIdx]);
//         }
//         for(int i=0; i<n; i++){
//             if(nums[i]!=i) return i;
//         }
//         return n;
//     }
// };


// ** Leetcode 287 - Find the duplicate number 
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int len = nums.size();
//         int i = 0;
//         while(i<len){
//             int correctIdx = nums[i];
//             if(nums[correctIdx]==nums[i]) return nums[i];
//             else swap(nums[i],nums[correctIdx]);
//         }
//         return 1000;
//     }
// };


// ** Leetcode 448 - Find all the numbers disappeared in an array
// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n= nums.size();
//         int i = 0;
//         while(i<n){
//             int correctIdx = nums[i]-1;
//             if(nums[correctIdx]==nums[i] || correctIdx==i) i++;
//             else swap(nums[i],nums[correctIdx]);
//         }
//         vector<int> ans;
//         for(int i=0; i<n; i++){
//             if(nums[i]!=i+1) ans.push_back(i+1);
//         }
//         return ans;
//     }
// };


// ** Leetcode 41 - First missing positive
// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         while(i<n){
//             if(nums[i]<=0) i++;
//             // int correctIdx = nums[i]-1;
//             else if(nums[i]<=0 || nums[i]>n || nums[i]==i+1 || nums[nums[i]-1]==nums[i]) i++;
//             else(swap(nums[i],nums[nums[i]-1]));
//         }
//         for(int i=0; i<n; i++){
//             if(nums[i]!=i+1) return i+1;
//         }
//         return n+1;
//     }
// };


// ** Leetcode 645 - Set Mismatch
// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& a) {
//         int n = a.size();
//         int i = 0;
//         for (int i = 0; i < n; i++) {
//             while (a[i] != a[a[i] - 1])
//                 swap(a[i], a[a[i] - 1]);
//         }
//         for (int i = 0; i < a.size(); i++) {
//             if (i + 1 != a[i]) {
//                 return {a[i], i + 1};
//             }
//         }
//         return {};
//     }
// };


// ** Leetcode 442 - Find all the duplicates in the array
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& a) {
//         int n = a.size();
//         for(int i=0; i<n; i++){
//             while(a[i] != a[a[i]-1]) swap(a[i], a[a[i]-1]);
//         }
//         vector<int> ans;
//         for(int i=0; i<n; i++){
//             if(a[i] != i+1) ans.push_back(a[i]);
//         }
//         return ans;
//     }
// };
