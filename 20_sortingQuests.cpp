//** Leetcode 169 - Majority element
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n= nums.size();
//         // n/2 se jyada times aara ho
//         for(int i=0; i<n; i++){
//             int count=1;
//             for(int j=i+1; j<n; j++){
//                 if(nums[i]==nums[j]) count++;
//             }
//             if(count>(n/2)) return nums[i];
//         }
//         return -1;
//     }
// }; 

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n= nums.size();
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()/2];
//     }
// }; 


// Given an array with n distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. the order of elements is the same, i.e 0 is placed in the place of the smallest element, 1 is placed for the second elements, ... N-1 is placed for the largest element.

// 19 12 23 8 16  - n=5
// 3  1  4  0 2 

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]= {19,12,23,8,16};
//     int n=5;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     vector<int> v(n,0);     //0 means not visited
//     int x=0;
//     for(int i=0; i<n; i++){
//         int min= INT_MAX;
//         int mindx= -1;
//         for(int j=0; j<n; j++){
//             if(v[j]==1) continue; // come out of loop
//             else{
//                 if(min>arr[j]){
//                     min= arr[j];
//                     mindx= j;
//                 }
//             }
//         }
//         arr[mindx] =x;
//         v[mindx]=1; //visited;
//         x++;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// t.c = O(n^2), s.c = O(n)

//** Leetcode 455 - Assign cookies */
// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         // g - greedfactor, s - size of cookie
//         // sorting
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int count= 0;
//         int i= 0;
//         int j=0;
//         while(i<g.size() && j<s.size()){
//             if(s[j]>=g[i]){
//                 count++;
//                 i++;
//                 j++;
//             }
//             else j++;
//         }

//         return count;
//     }
// };


// Given an array, arr[] containing 'n' integers, the task is to find an integer such that after replacing each and every element of every index of the array by [ai-k] where (i belongs to [1,n]), results in a sorted array. if no such integer exists that satisfies the above condition then return -1. find the range of k 

// arr= 5,2,10
// we have to find k such that subtracting that from each ele of the array make it sorted
// i.e 5-k, 2-k, 10-k : sorted

// |a| <= |b|
// a^2 <= b^2
// a^2 - b^2 <= 0

// NOTE :- (a-b)^2 = (b-a)^2

/* for sorting :-
for arr= 5,2,10
|2-k| >= |5-k|
(2-k)^2 >= (5-k)^2
(k-2)^2 - (k-5)^2 >= 0
(k-2 + k-5)(k-2 - (k-5)) >= 0
(2k-7)(3) >= 0
right side +ve chahie to hame 3 jo ki ek posiitive number hai to dusra b +ve number hi chahie rega , isilie 
2k-7 >= 0
k >= 7/2
k >= 3.5
since k is integer " k>4 : lower limit "

also |10-k| >= |2-k|
|k-10| >= |k-2|
(k-10)^2 >= (k-2)^2
(k-10 + k-2)(k-10 - (k-2)) >= 0
(2k-12)(-8) >= 0
- * - = +
2k-12 <= 0

" k <= 6 : upper limit " 

*/

/* making a general statement
a1 a2 a3 a4 a5 a6 
|k-a1| |k-a2| |k-a3|
so we can say that in general,
|k-am| >= |k-am-1|
(k-am)^2 - (k-am-1)^2 >= 0
(2k-[am+am-1]) (am-1 - am) >= 0
*/

/*
if am-1 - am >= 0, then
2k - [am + am-1] >= 0
* k >= am+am-1/2 *
*/

/*
if am-1 - am < 0, then
* k < am+am-1/2 *
*/

/*
so from this generalization we will get a range of k
k -> range -> [A,B]
kmax, kmin
if kmax < kmin = return -1
*/

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
float max(float a, float b){
    if(a>=b) return a;
    else return b;
}
float min(float a, float b){
    if(a<b) return a;
    else return b;
}

int main(){
    int arr[]= {5,3,10};
    int n= 3;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    float kmin= (float)(INT_MIN); //because range
    float kmax= (float)(INT_MAX);
    bool flag= true;

    for(int i=0; i<n-1; i++){
        // if(arr[i]-arr[i+1]>=0)
        if(arr[i]>=arr[i+1]){   //kmin
            kmin= max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{   //kmax
            kmax= min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag= false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else{
        cout<<"range of k is:- ["<<kmin<<","<<(int)kmax<<"]";
    }
}
