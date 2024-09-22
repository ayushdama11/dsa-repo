// other sorting problems were having time complexity - O(N^2)
// but Merge sort has time complexity of O(N.logN) which is beter than others

// ** Simple Merge :-
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i = 0;  // a
//     int j = 0;  // b
//     int k = 0;  // c
//     while(i<a.size() && j<b.size()){
        // if(a[i]<b[j]){
            // res[k]= a[i];
            // k++;
            // i++;
        // }
        // we can also write this like 
//        if(a[i]<b[j]) res[k++]=a[i++];

        // else{ // b[i]<=a[i]
        //     res[k] = b[j];
        //     k++;
        //     j++;
        // }
//         else res[k++]=b[j++];
//     }

//     if(i==a.size()){     // a is at the end
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//     if(j==b.size()){     // a is at the end
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }

// int main(){
//     int arr[] = {1,4,5,8};
//     int n1= sizeof(arr)/sizeof(arr[0]);
//     // making a copy of any array to a vector
//     vector<int> a(arr,arr+n1);
    
//     int brr[] = {2,3,6,7,10,12};
//     int n2 = sizeof(brr)/sizeof(brr[0]);
//     vector<int> b(brr,brr+n2);

//     vector<int> res(n1+n2);
//     merge(a,b,res);

//     for(int i=0; i<res.size(); i++){
//         cout<<res[i]<<" ";
//     }
// }


// ** Merge Sort ALgorihtm :-
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i = 0;  // a
//     int j = 0;  // b
//     int k = 0;  // c
//     while(i<a.size() && j<b.size()){
//        if(a[i]<b[j]) res[k++]=a[i++];
//        else res[k++]=b[j++];
//     }
//     if(i==a.size()){     // a is at the end
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//     if(j==b.size()){     // a is at the end
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }
// void mergeSort(vector<int>& v){
//     int n = v.size();   // {5,1,3,0,4,9,6};
//     // base case
//     if(n==1) return;
//     int n1 = n/2;   // n1= 3
//     int n2 = n-n/2;     // n2= 4
//     // vector<int> a(n1);
//     // vector<int> b(n2);
//     vector<int>a(n1), b(n2);
//     // copy pasting
//     for(int i=0; i<n1; i++){
//         a[i]=v[i];
//     }
//     for(int i=0; i<n2; i++){
//         b[i]=v[i+n1];
//     }
//     // magic aka recursion
//     mergeSort(a);
//     mergeSort(b);
//     // merge
//     merge(a,b,v);

//     // clearing the vectors - used for imporving space complexity of the algorithm
//     a.clear();
//     b.clear();
// }
// int main(){
//     int arr[] = {5,1,3,0,4,9,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);   // same as arr
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
    

// ** Implemeent the merge sort algorithm to sort aan array of elements in dereasing order
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i = 0;  // a
//     int j = 0;  // b
//     int k = 0;  // c
//     // ** bas yaha > sign lagana 
//     while(i<a.size() && j<b.size()){
//        if(a[i]>b[j]) res[k++]=a[i++];
//        else res[k++]=b[j++];
//     }
//     if(i==a.size()){     // a is at the end
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//     if(j==b.size()){     // a is at the end
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }
// void mergeSort(vector<int>& v){
//     int n = v.size();   // {5,1,3,0,4,9,6};
//     // base case
//     if(n==1) return;
//     int n1 = n/2;   // n1= 3
//     int n2 = n-n/2;     // n2= 4
//     // vector<int> a(n1);
//     // vector<int> b(n2);
//     vector<int>a(n1), b(n2);
//     // copy pasting
//     for(int i=0; i<n1; i++){
//         a[i]=v[i];
//     }
//     for(int i=0; i<n2; i++){
//         b[i]=v[i+n1];
//     }
//     // magic aka recursion
//     mergeSort(a);
//     mergeSort(b);
//     // merge
//     merge(a,b,v);

//     // clearing the vectors - used for imporving space complexity of the algorithm
//     a.clear();
//     b.clear();
// }
// int main(){
//     int arr[] = {5,1,3,0,4,9,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);   // same as arr
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


// ** Count Inversions :-
// Two elements of an array a, a[i] and a[j] form an inversion if a[i]>a[j] and i<j. Given an array of integers . find the inversion count in the array

// Brute Force
// #include<iostream>
// #include<vector>
// using namespace std;
// int count =0;

// int main(){
//     int arr[] = {5,1,3,0,4,9,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);   // same as arr
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     // Brute force method - Naive approach
//     int count=0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i]>v[j]) count++;
//         }
//     }
//     cout<<count;    // 7
// }


// using merge Sort
// #include<iostream>
// #include<vector>
// using namespace std;
// int c = 0;
// int inversion(vector<int>& a,vector<int> b){
//     int count = 0;
//     int i = 0;
//     int j = 0;
//     while(i<a.size() && j<b.size()){
//         // kyuki dono vectors sorted hoge toh islie agar a[0]th element agar b[j] se bada hai to uske aage wale bhi sab elements bade hi hoge j se to wo inversion hoge 
//         if(a[i]>b[j]){
//             count+=(a.size()-i);
//             j++;
//         }
//         else{   // a[i]<b[j]
//             i++;
//         }
//     }
//     return count;    // ** 7
// }
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i = 0;  // a
//     int j = 0;  // b
//     int k = 0;  // c
//     while(i<a.size() && j<b.size()){
//        if(a[i]<b[j]) res[k++]=a[i++];
//        else res[k++]=b[j++];
//     }
//     if(i==a.size()){     // a is at the end
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//     if(j==b.size()){     // a is at the end
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }
// void mergeSort(vector<int>& v){
//     int n = v.size();   // {5,1,3,0,4,9,6};
//     // base case
//     if(n==1) return;
//     int n1 = n/2;   // n1= 3
//     int n2 = n-n/2;     // n2= 4
//     // vector<int> a(n1);
//     // vector<int> b(n2);
//     vector<int>a(n1), b(n2);
//     // filling elements
//     for(int i=0; i<n1; i++){
//         a[i]=v[i];
//     }
//     for(int i=0; i<n2; i++){
//         b[i]=v[i+n1];
//     }
//     // magic aka recursion
//     mergeSort(a);
//     mergeSort(b);

//     // count the inversions of two sorted vectors
//     c+=inversion(a,b);

//     // merge
//     merge(a,b,v);

//     // clearing the vectors - used for imporving space complexity of the algorithm
//     a.clear();
//     b.clear();
// }
// int main(){
//     int arr[] = {5,1,3,0,4,9,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);   // same as arr
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
//     cout<<c;
// }


// ** Reverse Pairs - Leetcode 493
// class Solution {
// public:

//     int ans = 0;
//     void merge(vector<int>&a, int low, int mid, int high){
//         // check the condition
//         int i = low, j = mid+1;
//         while(i<=mid and j<=high){
//             if((long long int)a[i]>(long long int)2*a[j]){
//                 ans+=mid-i+1;
//                 j++;
//             }
//             else i++;
//         }

//         // merge it 
//         i=low, j=mid+1;
//         vector<int>b;
//         while(i<=mid and j<=high){
//             if(a[i] < a[j]) b.push_back(a[i++]);
//             else b.push_back(a[j++]);
//         }

//         while(i<=mid) b.push_back(a[i++]);
//         while(j<=high) b.push_back(a[j++]);

//         // copying back the elements of b to a 
//         for(int i=low;i<=high;i++) a[i]=b[i-low];

//     }
//     void mergeSort(vector<int>&a, int low, int high){
//         if(low==high) return;
//         int mid=(low+high)/2;

//         mergeSort(a,low,mid);
//         mergeSort(a,mid+1,high);

//         merge(a,low,mid,high);
//     }
//     int reversePairs(vector<int>& nums) {

//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         mergeSort(nums,0,nums.size()-1);
//         return ans;     // we can access it as it is a global variable
//     }
// };
