// Linear search - tc - O(n)
// binary search - works only if array is sorted(asc/desc)
// lo, mid, hi

/*
mid= (lo+hi)/2
mid= lo+(hi-lo)/2

if(arr[mid] == target) return true
if(arr[mid]< target) lo= mid+1
if(arr[mid]> target)hi= mid-1
*/

//** binary search - leetcode 704
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         // lo, mid, hi
//         int lo = 0;
//         int hi = nums.size()-1;
//         while(lo<=hi){
//             int mid= (hi+lo)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]>target) hi = mid-1;
//             else lo = mid+1;
//         }
//         return -1;
//     }
// };

// time complexity of binary search - O(logn)


//** given a sorted integer array and an integer 'x', find the **lower bound** of x.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,2,4,5,9,15,18,21,24};
//     int n=9;    
    // int x= 20;

    // linear search
    // for(int i=0; i<n; i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // } //O(n)

    // binary search
//     int x= 12;  //lower bound=9, upper bound=15
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while(lo<=hi){
//         int mid = (lo+hi)/2;
//         if(arr[mid]==x){
//             flag = true; // we got the ele in array
//             cout<<arr[mid-1];
//             break;
//         }
//         else if(arr[mid]<x) lo = mid+1;
//         else hi = mid - 1;
//     }
//     if(flag==false) cout<<arr[hi];
// }


//** Given a sorted integer array and an integer 'x', find the upper bound of x.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,2,4,5,9,15,18,21,24};
//     int n= 9;
//     int x= 12;  //upper bound= 15
//     int lo= 0;
//     int hi= n-1;
//     bool flag = false;
//     while(lo<=hi){
//         int mid= (lo+hi)/2;
//         if(arr[mid]==x){
//             flag= true;
//             cout<<arr[mid+1];
//             break;
//         }
//         else if(arr[mid]<x) lo= mid+1;
//         else hi= mid-1;
//     }
//     if(flag==false) cout<<arr[lo];
// }


//** Given a sorted array of n elements and a target 'x'. find the first occurence of 'x' in the array. if 'x' does not exist return -1 */

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,2,3,3,3,3,4,4,5,5,9};
//     int n= 13;
//     int x= 3;

//     int lo= 0;
//     int hi= n-1;
//     bool flag= false;
//     while(lo<=hi){
//         int mid= (lo+hi)/2;
//         if(arr[mid]==x){
//             if(arr[mid-1]!=x){
//                 flag= true;
//                 cout<<mid;
//                 break;
//             }
//             else{   //arr[mid-1]==x
//                 hi = mid-1;
//             }
//         }
//         else if(arr[mid]<x) lo= mid+1;
//         else hi = mid-1;
//     }
//     if(flag==false) cout<<-1;
// }


// ** last occurenece of an element
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,2,3,3,3,3,4,4,5,5,9};
//     int n= sizeof(arr);
//     int x=4;

//     int lo= 0;
//     int hi= n-1;
//     bool flag= false;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]==x){
//             if(arr[mid+1]!=x){
//                 flag= true;
//                 cout<<mid;
//                 break;
//             }
//             else{   //arr[mid+1]==x
//                 lo= mid+1;
//             }
//         }
//         else if(arr[mid]<x) lo= mid+1;
//         else hi = mid-1;
//     }
//     if(flag==false) cout<<-1;
// }


//** given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it */

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[] = {0,1,2,4,5,6,9,12};
//     int n= sizeof(arr);

    // linear search = O(n)
    // for(int i=0; i<n; i++){
    //     if(i!=arr[i]){
    //         cout<<i;
    //         break;
    //     }
    // }

    // binary search = O(logn)
//     int lo= 0;
//     int hi= n-1;
//     int ans= -1;
//     while(lo<=hi){
//         int mid= (lo+hi)/2;
//         if(arr[mid]==mid) lo= mid+1;    //matlab mid ke pehle sorted h
//         else {
//             ans = mid;
//             hi = mid-1;
//         }
//     }
//     cout<< ans;
// }



//** sqrt(x) = leetcode 69 */

// class Solution {
// public:
//     int mySqrt(int x) {
//         int lo= 0;
//         int hi= x;
//         while(lo<=hi){
//             int mid= (lo+hi)/2;
//             long long m= (long long)mid;
//             long long y = (long long) x;
//             if((m*m)==y) return mid;
//             else if(m*m>y) hi= mid-1;
//             else lo= mid+1;
//         }
//         return hi;
//     }
// };


