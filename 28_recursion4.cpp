// ** Finding subarrays - find out all the subarrays of an array
// #include<iostream>
// #include<vector>
// using namespace std;
// void subArray(vector<int> v, int arr[], int n, int idx){
//     if(idx==n){
//         for(int i=0; i<v.size(); i++){
//             cout<<v[i];
//         }
//         cout<<endl;
//         return;
//     }
//     // left side wale sab chaleegee
//     subArray(v,arr,n,idx+1);
    
//     // rights side walo ke lieyy
//     // agar empty ho pehle agar vector to normal push kardo
//     if(v.size()==0){
//         v.push_back(arr[idx]);
//         subArray(v,arr,n,idx+1);
//     }
//     // agar empty na ho - matlab already element pada hua hai to jo vector ka last pushed element ho agar wo arr[idx-1] ke barabar hoga to hi ham use push karege
//     else if(arr[idx-1]==v[v.size()-1]){
//         v.push_back(arr[idx]);
//         subArray(v,arr,n,idx+1);
//     }
    
// }
// int main(){
//     int arr[] = {1,2,3,4};
//     int n= sizeof(arr)/sizeof(arr[0]);

//     // 1 12 123 1234
//     // for(int i=0; i<n; i++){     // start of subarray
//     //     for(int k=i; k<n; k++){     // k only denotes number of rounds for j
//     //         for(int j=i;j<=k;j++){
//     //             cout<<arr[j];
//     //         }
//     //         cout<<endl;
//     //     }
//     // }
//     vector<int> v;
    // recursive solution
//     subArray(v,arr,n,0);

// }


// ** Palindrome using recursion 
// Find out whether a given string is palindrom or not using recursion

// #include<iostream>
// #include<string>
// using namespace std;
// bool isPalindrome(string s){
//     int i=0;
//     int j=s.length()-1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }

// Using recursion
// bool isPalindromeRec(string s, int i, int j){
//     if(i>j) return true;
//     if(s[i]!=s[j]) return false;
//     else return isPalindrome(s,i+1,j-1);
// }

// int main(){
//     string s = "racecar";
    // cout<<isPalindrome(s);
//     cout<<isPalindromeRec(s,0,s.length()-1);
// }


// ** Greatest Common Divisor :-
// gcd of two no.s

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int hcf(int a, int b){  // TC = O(min(a,b))
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0) return i;
//     }
//     return 1;
// }

// int gcd(int a, int b){  // tc = O(log(a+b))
//     if(a==0) return b;
//     else return gcd(b%a,a);
// }

// int main(){
//     int a= 24;
//     int b= 60;
//     // cout<<hcf(a,b);
//     cout<<gcd(b,a);
// }


// ** Generate all binary strings of length n without consecutive 1's
// #include<iostream>
// #include<string>
// using namespace std;
// int n=3;
// void generate(string s){
//     if(s.length()==n){
//         cout<<s<<endl;
//         return;
//     }
//         generate(s+'0');  // hamesha hi run hoga
//     if(s=="") {     // empty ho to dono calll laga lo 
//         generate(s+'1');
//     }
//     else if(s[s.length()-1]=='0'){
//         generate(s+'1');
//     }
// }
// int main(){
//     // int n = 3;
//     generate("");
// }
    

// ** Combination Sum - leetcode 39



