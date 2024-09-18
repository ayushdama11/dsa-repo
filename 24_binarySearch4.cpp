//** assignments */

// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]= {1,2,3,3,4,4,4,5};
//     int n= sizeof(arr);
//     int x= 3;
//     int lo=0;
//     int hi=n-1;
//     int ans=0;
//     while(lo<=hi){
//         int mid= lo+(hi-lo)/2;
//         if(arr[mid]==x){
//             if(arr[mid+1]==x) lo=mid+1;
//             else{
//                 ans=mid;
//                 break;
//             }
//         }
//         else if(arr[mid]>x) hi= mid-1;
//         else lo=mid+1;  //arr[mid]<x
//     }
//     cout<<ans;
// }

//** Find First and Last Position of Element in Sorted Array */ leetcode 34

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& arr, int target) {
//         vector<int> v(2);
//         int n= arr.size();
//         int lo=0;
//         int hi=n-1;
//         v[0]= -1;
//         v[1]= -1;

// first occurence
//         while(lo<=hi){
//             int mid= lo+(hi-lo)/2;
//             if(arr[mid]==target){
//                 if(mid==0) {
//                     v[0]=mid;
//                     break;
//                 }
//                 else if(arr[mid-1]!=target){
//                     v[0]=mid;
//                     break;
//                 }
//                 else hi=mid-1;
//             }
//             else if(arr[mid]>target) hi=mid-1;
//             else if(arr[mid]<target) lo=mid+1;
//         }

// last occurence
//         lo=0;
//         hi=n-1;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//             if(arr[mid]==target){
//                 if(mid==n-1){
//                     v[1]=mid;
//                     break;
//                 }
//                 if(arr[mid+1]!=target){
//                     v[1]=mid;
//                     break;
//                 }
//                 else lo=mid+1;
//             }
//             else if(arr[mid]>target) hi=mid-1;
//             else if(arr[mid]<target) lo=mid+1;
//         }
//         return v;
//     }
// };

//** Given a sorted binary array, efficiently count the total number of 1’s in it. */
// binary array contains only 0's and 1's

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1};
//     int n= 13;
//     int x= 1;

//     int lo= 0;
//     int hi= n-1;
//     int firstIdx= -1;
//     while(lo<=hi){
//         int mid= (lo+hi)/2;
//         if(arr[mid]==x){
//             if(mid==0){
//                 firstIdx= mid;
//                 break;
//             }
//             else if(arr[mid-1]!=x){
//                 firstIdx= mid;
//                 break;
//             }
//             else{   //arr[mid-1]==x
//                 hi = mid-1;
//             }
//         }
//         else if(arr[mid]<x) lo= mid+1;
//         else hi = mid-1;
//     }
//     if(firstIdx==-1) cout<<0;
//     else cout<<n-firstIdx;
// }

//** Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5][6] = {{0, 0, 0, 0, 1, 1}, {0, 0, 1, 1, 1, 1}, {0, 0, 0, 1, 1, 1}, {0, 1, 1, 1, 1, 1}, {0, 0, 0, 1, 1, 1}};
//     int m = 5; // rows
//     int n = 6; // cols
//     int row = 0;
//     int maxOnes=-1;
//     int x=1;

//     for (int i = 0; i < m; i++)
//     { // binary search on every row
//         int countOnes= 0;   //no. of ones in ith row
//         int lo = 0;
//         int hi = n - 1;
//         int firstIdx = -1;
//         while (lo <= hi)
//         {
//             int mid = (lo + hi) / 2;
//             if (arr[i][mid] == x)
//             {
//                 if (mid == 0)
//                 {
//                     firstIdx = mid;
//                     break;
//                 }
//                 else if (arr[i][mid-1] != x)
//                 {
//                     firstIdx = mid;
//                     break;
//                 }
//                 else
//                 { // arr[mid-1]==x
//                     hi = mid - 1;
//                 }
//             }
//             else if (arr[i][mid] < x)
//                 lo = mid + 1;
//             else
//                 hi = mid - 1;
//         }
//         if (firstIdx != -1)
//             countOnes=n-firstIdx;
//         if(maxOnes<countOnes){
//             maxOnes= countOnes;
//             row=i;
//         }
//     }
//     cout<<row<<" "<<maxOnes<<endl;
// }

//** given an array of integers nums containing n+1 integers where each integer is in the range [1,n] inclusive in sorted order. there is only one repeated number in nums, return this repeated number. */

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]= {1,2,3,4,4,5,6,7};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     // binary search
//     int lo= 0;
//     int hi= n-1;
//     while(lo<=hi){
//         int mid= lo+(hi-lo)/2;
//         if(arr[mid]==mid+1) lo= mid+1;
//         if(arr[mid]==mid){
//             if(arr[mid]==arr[mid-1]){
//                 cout<<arr[mid];
//                 break;
//             }
//             else hi=mid-1;
//         }
//     }
// }

//** valid perfect square */ leetcode 367
// class Solution {
// public:
//     bool isPerfectSquare(int num) {
// O(logn)
//         int x= num;
//         int lo= 0;
//         int hi= x;
//         while(lo<=hi){
//             int mid= lo+(hi-lo)/2;
//             long long m= (long long) mid;
//             long long y= (long long) x;
//             if((m*m)==y) return true; //perfect square
//             else if(m*m>y) hi=mid-1;
//             else lo=mid+1;
//         }
//         return false; //integer part

// ** O(1) **
// int root= sqrt(num);
// if(root*root==num) return num;
// else return false;
//     }
// };

//** Arranging coins */ leetcode 441
// class Solution {
// public:
//     int arrangeCoins(int n) {
//         long long lo=1;
//         long long hi=n;
//         while(lo<=hi){
//             long long k=lo+(hi-lo)/2; //mid
//             long long m=k*(k+1)/2;
//             if(m==n) return (int)k;
//             if(m>n) hi=k-1;
//             else lo=k+1;
//         }
//         return (int)hi;
//     }
// };

//** binary search in array sorted in decreasing order */
// #include <iostream>
// using namespace std;
// int bs(int lo, int hi, int arr[], int t)
// {
//         while(lo<=hi){
//                 int mid=lo+(hi-lo)/2;
//                 if(arr[mid]==t) return mid;
//                 else if(arr[mid]>t) lo=mid+1;
//                 else hi=mid-1;
//         }
//         return -1;
// }
// int main()
// {
//         int arr[] = {10, 9, 7, 5, 3, 0, -1, -4};
//         int n = sizeof(arr) / 4; // for calc size
//         int t;
//         cout<<"enter target element : ";
//         cin>>t;
//         cout<<bs(0,n-1,arr,t);
// }


//** binary search in infinite array */
// we can do this by doubling the search space


//** search a 2d matrix */ leetcode 74
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& arr, int target) {
        // lo=0, hi=m*n-1, mid
        // ** row= mid/n; col= mid%n **

//         int m= arr.size(); //rows
//         int n= arr[0].size(); //cols
//         int lo= 0;
//         int hi= m*n-1;
//         while(lo<=hi){
//             int mid= lo+(hi-lo)/2;
//             int row= mid / n;
//             int col= mid % n;
//             if(arr[row][col]==target) return true;
//             else if(arr[row][col]>target) hi=mid-1;
//             else lo=mid+1;
//         }
//         return false; 
//     }
// };


//** Search in Rotated Sorted Array */ leetcode 33
// better solution
// class Solution {
// public:
//     int search(vector<int>& arr, int target) {
        // better soln

//         int n= arr.size();
//         int lo=0;
//         int hi=n-1;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//             if(arr[mid]==target) return mid;
            // see which side of mid is sorted left or right
//             else if(arr[mid]<=arr[hi]){ // is the mid-hi sorted
//                 if(target>=arr[mid] && target<=arr[hi]){
//                     lo= mid+1; //remove left side
//                 } 
//                 else hi= mid-1;
//             }
//             else{   // arr[lo]<=arr[mid] - lo-mid is sorted
//                 if(target>=arr[lo] && target<=arr[mid])
//                     hi=mid-1;
//                 else lo=mid+1;
//             }
//         }
//         return -1;
//     }
// };



//** search in rotated sorted array 2 */ leetcode 81
// class Solution {
// public:
//     bool search(vector<int>& arr, int target) {
//         int n= arr.size();
//         int lo= 0;
//         int hi= n-1;
//         while(lo<=hi){
//             int mid= lo+(hi-lo)/2;
//             if(arr[mid]==target) return true;
            // when there are many repetitive eles
//             else if(arr[lo]==arr[mid] && arr[hi]==arr[mid]){
//                 hi--;
//                 lo++;
//             }
//             else if(arr[mid]<=arr[hi]){ //checking if mid-hi is sorted
//                 if(target>=arr[mid] && target<=arr[hi])
//                     lo= mid+1;
//                 else hi= mid-1;
//             }
//             else{   //arr[lo]<=arr[mid] - lo-mid is sorted
//                 if(target>=arr[lo] && target<=arr[mid])
//                     hi=mid-1;
//                 else lo=mid+1;
//             }
//         }
//         return false;
//     }
// };




