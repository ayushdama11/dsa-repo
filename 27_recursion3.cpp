//** Tower of hanoi */ we have to put discs from source to destination
// minimumm number of moves = 2^n-1

// #include<iostream>
// using namespace std;
// void hanoi(int n, char a, char b, char c){      // a-src rod, b-helper rod, c- destination rod
//     if(n==0) return;

//     hanoi(n-1,a,c,b); //pehle n-1 discs ko b rod pe dalege usko as a destination rod k trh use karege
//     cout<<a<<" - "<<c<<endl; // a se c me badi wali disc jo nth disc hai use bhej do
    // now b rod is source, c-destination, a-helper = transfering n-1 discs to destination rod i.e c rod
//     hanoi(n-1,b,a,c);
// }
// int main(){
//     int n= 3;
//     hanoi(n,'a','b','c');
// }


//*** Recursion in Arrays */

//** traversing an array using recursion */ printing the elements
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(int arr[], int n, int idx){
//     if(idx==n) return; // base case
//     cout<<arr[idx]<<" ";
//     display(arr,n,idx+1);
// }
// void display2(vector<int>& v, int idx){ 
//     if(idx==v.size()) return; // base case 
//     cout<<v[idx]<<" ";  
//     display2(v,idx+1); 
// } 
// int main(){ 
//     int arr[]= {2,1,6,3,9,0,2,7}; 
//     int n= sizeof(arr)/sizeof(arr[0]); 
//     display(arr,n,0); 
//     cout<<endl; 

    // displaying elements in vector using recursion 
//     vector<int> v(n); 
//     for(int i=0; i<n; i++){ 
//         v[i]= arr[i]; 
//     }
//     display2(v,0); 
// }


//** Find out maximum element of an array using recursion */
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// printing the max
// void printMax(int arr[], int n, int idx, int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max=arr[idx];
//     printMax(arr,n,idx+1,max);
// }

// storing the max
// int maxInArray(int arr[], int n, int idx){
//     if(idx==n) return INT_MIN;
//     return max(arr[idx],maxInArray(arr,n,idx+1));
// }

// int main(){
//     int arr[]= {2,1,6,3,9,0,2,7};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     printMax(arr,n,0,INT_MIN);
//     cout<<endl;

//     cout<<maxInArray(arr,n,0);
// }


//*** Recursion in Strings */

//** skip a character */ remove all occurrences of 'a' from a string

// #include<iostream>
// #include<string>
// using namespace std;
// void removeChar(string ans, string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a') removeChar(ans,original.substr(1));
//     else removeChar(ans+ch, original.substr(1));
// }

//better solution - without any deletion in original array 
// void removeChar(string ans, string original, int idx){
//     if(idx==original.length()){
//         cout<<ans;
//         return;
//     }
//     char ch = original[idx];
//     if(ch=='a') removeChar(ans,original,idx+1);
//     else removeChar(ans+ch,original,idx+1);
// }
// int main(){
//     string str= "ayush Dama";
//     removeChar("",str,0);

    //with for loop
    // string s = "";
    // for(int i=0; i<str.length(); i++){
    //     if(str[i]!='a') s.push_back(str[i]);
    // }
    // cout<<s;

// }


//** print subsets of a string with unique characters */ 
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// 
// printing subsets
// void printSubset(string ans, string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch= original[0];
//     printSubset(ans+ch,original.substr(1));
//     printSubset(ans,original.substr(1));
// }
// 
//storing subsets
// void printSubset(string ans, string original, vector<string>& v){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch= original[0];
//     printSubset(ans+ch,original.substr(1),v);
//     printSubset(ans,original.substr(1),v);
// }
// int main(){
//     string str= "abc";
//     vector<string> v;
//     // printSubset("",str);
//     printSubset("",str,v);
//     for(string ele : v){
//         cout<<ele<<endl;
//     }
// }


//** subsets of array */ 
// #include<iostream>
// #include<vector>
// using namespace std;
// void printSubset(int arr[], int n, int idx, vector<int> ans){
//     if(idx==n){
//         for(int i=0; i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
// pehle kuch nai karna
//     printSubset(arr,n,idx+1,ans); 
// badme push back karke call lagaya hai
//     ans.push_back(arr[idx]); 
//     printSubset(arr,n,idx+1,ans);
// }
// 
// int main(){
//     int arr[]= {1,2,3};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     printSubset(arr,n,0,v);
// }


//** subsets */ leetcode 78
// class Solution {
// public:
//     void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx){
//         if(idx==nums.size()){
//             finalAns.push_back(ans);
//             return;
//         }
//         helper(nums,ans,finalAns,idx+1);
//         ans.push_back(nums[idx]);
//         helper(nums,ans,finalAns,idx+1);
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int> ans;
//         vector<vector<int>> finalAns;
//         helper(nums, ans, finalAns, 0);
//         return finalAns;
//     }
// };


//** subsets 2 */ print subsets of a string containing duplicate characters
// ---- jab ch==dh ho tab hame left wali call true flag k sath aur right wali call false flag k sath chalani hai
// ---- jab ch!=dh ho aur agr flg ture ho to dono left aur right ki call true k sath lagani hai 
// ---- jab ch!=dh ho aur agr flg false ho to left call nai lagani aur right call lagani haiii !!

// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void storeSubset(string ans, string original, vector<string>& v, bool flag){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch= original[0];
//     if(original.length()==1){       // length agar 1 hoo to normally run kar doo
//         if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
//         storeSubset(ans,original.substr(1),v,true);
//         return;
//     }
//     char dh = original[1];
//     if(ch==dh){     // duplicate ho tab right wale me false 
//         if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
//         storeSubset(ans,original.substr(1),v,false);
//     } else {    // if ch!=dh - normally chalne doo
//         if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
//         storeSubset(ans,original.substr(1),v,true);
//     }
// }
// int main(){
//     string str= "aaab";
//     vector<string> v;
//     // printSubset("",str);
//     storeSubset("",str,v,true);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
// }


// ** subsets 2 for arrays - leetcode 90
// class Solution {
// public:
//     void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx) {
//         finalAns.push_back(ans);

//         for (int i = idx; i < nums.size(); i++) {
//             if (i > idx && nums[i] == nums[i-1]) continue; // Skip duplicates
//             ans.push_back(nums[i]);
//             helper(nums, ans, finalAns, i + 1);
//             ans.pop_back();
//         }
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end()); // Sort for efficient duplicate handling
//         vector<int> ans;
//         vector<vector<int>> finalAns;
//         helper(nums, ans, finalAns, 0);
//         return finalAns;
//     }
// };


// ** Increasing subsequences - ese subsets jinka length jo hai wo k ke barabar hona chahie 
// #include<iostream>
// #include<vector>
// using namespace std;
// void printSubset(int arr[], int n, int idx, vector<int> ans, int k){
//     if(idx==n){
//         if(ans.size()==k){
//             for(int i=0; i<ans.size();i++){
//                 cout<<ans[i]<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     if(ans.size()+(n-idx) < k) return;  // then it is not possible to form subsequeneces
//     printSubset(arr,n,idx+1,ans,k); 
//     ans.push_back(arr[idx]); 
//     printSubset(arr,n,idx+1,ans,k);
// }

// int main(){
//     int arr[]= {1,2,3,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     int k= 3;
//     printSubset(arr,n,0,v,k);
// }


// ** Permutations in Strings - bad in term of time and space complexity 
// Finding all permutations of an string given all elements of the string are unique
 
// #include<iostream>
// #include<vector>
// using namespace std;
// void permutations(string ans, string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0; i<original.length(); i++){
//         char ch = original[i];
//         string left = original.substr(0,i);
//         string right = original.substr(i+1);
//         permutations(ans+ch,left+right);
//     }
// }
// int main(){
//     string str = "abcde";
//     permutations("",str);

    // cout<<str.substr(0,1);  // a
    // cout<<str.substr(0,3);  // abc
    // cout<<str.substr(1,2);  // bc   -- (a,b), a is starting idx inclusive , aurr jo b hai wo hame kitne total characters chahie wo hota haii
    // cout<<str.substr(0,2);  // ab

    //  c ka index hai 2 , string len = 5 (0-4 idxs)    , to c ke left me characters hai ab, and jo c ke right me characters hai de , unhe jodna haii

    // string left = str.substr(0,2);  // here 2 is the index of c
    // cout << left<< endl;    // ab
    // string right = str.substr(2+1);
    // cout<< right << endl;   // de

// }



// ios::sync_with_stdio(0);
// cin.tie(0);