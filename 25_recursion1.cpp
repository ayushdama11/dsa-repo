// recursion  - function that calls itself

//** make a function which calculates the factorial of n using recursion */
// n! = n * (n-1)!

// #include<iostream>
// using namespace std;
// int fact(int n){
    //base case
//     if(n==1 || n==0) return 1;
    //recursive call 
//     return n*fact(n-1);
// }
// int main(){
//     cout<<fact(6);
// }


//** Print n to 1 using recursion */
// #include<iostream>
// using namespace std;
// void print(int n){
    //base case - used for terminating
//     if(n==0) return;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     print(6);
// }


//** print 1 to n (extra parameter) */
// #include<iostream>
// using namespace std;
// void print(int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     print(1,n);
// }


//** print 1 to n after call */
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     print(8);
// }


//** steps for solving recursion
// base case
// kaam
// call
// kaam
// return


//** print sum from 1 to n (parameterised) */
// #include<iostream>
// using namespace std;
// void sum1toN(int sum, int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     sum1toN(sum+n,n-1);
// }
// int main(){
//     sum1toN(0,10);
// }


//** print sum from 1 to n (return type) */
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// int main(){
//     cout<<sum(8);
// }


//** make a function which calculates 'a' raised to the power 'b' using recursion */
// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     if(a==0 && b==0) {
//         cout<<"0 raised to the power 0 is not defined";
//     }
//     if(a==0) return 0;
//     int p=1;
//     for(int i=1; i<=b; i++){
//         p *= a; 
//     }
//     return p;
// }   
    //recursive function
// int pow(int a, int b){
//     if(b==0) return 1;
//     return a*pow(a,b-1);
// }
// int main(){
//     int a;
//     cout<<"enter base : ";
//     cin>>a;
//     int b;
//     cout<<"enter exponent : ";
//     cin>>b;
//     cout<<a<<" raised to the power "<<b<<" is "<<pow(a,b);
// }



//** assignment */
//** Print an increasing-decreasing sequence using recursion */ eg: n=5, output : 123454321
// #include<iostream>
// using namespace std;
// void seq(int x, int n){
//     if(x>=n){
//         cout<<n<<" ";   // taaki n 2 bar print na ho islie
//         return;
//     };  
//     cout<<x<<" ";
//     seq(x+1,n);
//     cout<<x<<" ";
// }
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     seq(1,n);
// }


//** Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion */
// #include<iostream>
// using namespace std;
// void print(int x, int n){
//     if(x>n) return;
//     if(x%2!=0) cout<<x<<" ";
//     print(x+1,n);
// }
// int main(){
//     int a;
//     cout<<"enter a : ";
//     cin>>a;
//     int b;
//     cout<<"enter b : ";
//     cin>>b;
//     print(a,b);
// }


//** Power of Two */ leetcode 231
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n==0) return false;
//         if(n==1) return true;
//         if(n%2!=0) return false;
//         return isPowerOfTwo(n/2);
//     }
// };


//** Power of Three */ leetcode 326
// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         if(n==1) return true;
//         if(n==0 || n%3!=0) return false;
//         return isPowerOfThree(n/3);
//     }
// };


//** Power of Four */ leetcode 342
// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if(n==1) return true;
//         if(n%4!=0 || n==0) return false;
//         return isPowerOfFour(n/4);
//     }
// };


//** calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 steps at each level . */
#include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<stair(n);
}


