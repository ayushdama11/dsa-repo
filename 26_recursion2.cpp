//** write a function to calculate the nth fibonacci number using recursion */ - time complexity - O(2^n)
// fibonacci number - n= (n-1)+(n-2)

// #include<iostream>
// using namespace std;
// int fibo(int n){    //return the term at nth position
//     if(n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }
// int main(){
//     // 1 1 2 3 5 8 13 21 32 55 89 ...
//     cout<<fibo(8);
// }


// recursion tree diagram

//** power function (logarithmic) */ -  *** tc=O(logn) ***, *** sc= O(logn) *** 

// #include<iostream>
// using namespace std;
// int pow(int x, int n){  // x-base, n-power
//     if(n==1) return x;
//     int ans= pow(x,n/2);
//     if(n%2==0){
//         return ans*ans;
//     }
//     else{
//         return ans*ans*x;
//     }
// }
// int main(){
//     cout<<pow(3,6);
// }


//** Stair path */ one can take only 1 or 2 steps
// formula- stair(n)=stair(n-1)+stair(n-2)

// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==2) return 2;
//     if(n==1) return 1;
//     return stair(n-1) + stair(n-2);
// }
// int main(){
//     cout<<stair(5);
// }


//** Maze path */ - only we can go down and right direction not left and up direction

// #include<iostream>
// using namespace std;
// //method-1
// int maze(int sr, int sc, int er, int ec){
//     //base case
//     if(sr>er || sc>ec) return 0; // index coming out of matrix
//     if(sr==er && sc==ec) return 1;
//     int rightWays = maze(sr,sc+1,er,ec);
//     int downWays = maze(sr+1,sc,er,ec);
//     int totalWays= rightWays + downWays;
//     return totalWays;
// }
// //method-2
// void printPath(int sr, int sc, int er, int ec, string s){
//     if(sr>er || sc>ec) return; // index coming out of matrix
//     if(sr==er && sc==ec){   //destination reached
//         cout<<s<<endl;
//         return;
//     };
//     printPath(sr,sc+1,er,ec,s+'r');  //right
//     printPath(sr+1,sc,er,ec,s+'d');   //down
// }
// //method-3 - doing it with 2 variables
// int maze2(int er, int ec){
//     if(er<1 || ec<1) return 0; // index coming out of matrix
//     if(er==1 && ec==1) return 1;
//     int rightWays = maze2(er, ec-1); // right
//     int downWays = maze2(er-1, ec); // down
//     int totalWays= rightWays + downWays;
//     return totalWays;
// }
// int main(){
//     // cout<<maze(0,0,2,2);
//     // printPath(0,0,2,2,"");
//     cout<<maze2(3,3); // 3x3 matrix 
// } 



//** Pre in post */
// kaam - pre
// call 1
// kaam - in
// call 2
// kaam - post


#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<"pre"<<n<<endl;
    pip(n-1);
    cout<<"in"<<n<<endl;
    pip(n-1);
    cout<<"post"<<n<<endl;
}
int main(){
    pip(3);
}



//** print zig-zag */
//input output
//1     111
//2     211121112
//3     321112111232111211123

// #include<iostream>
// using namespace std;
// void zigzag(int n){
//     if(n==0) return;
//     cout<<n;
//     zigzag(n-1);
//     cout<<n;
//     zigzag(n-1);
//     cout<<n;
// }
// int main(){
//     cout<<endl;
//     zigzag(3);
//     cout<<endl;
// }


//** Write a program to calculate the sum of the digits of a given positive integer using recursion. */
// #include<iostream>
// using namespace std;
// int sumOfDigits(int n){
//     if(n==0){
//         return 0;
//     }
//     return (n%10)+sumOfDigits(n/10);
// }
// int main(){
//     cout<<sumOfDigits(542);
// }


//** Write a program to calculate the reverse of a given positive integer using recursion */

// #include<iostream>
// using namespace std;
// //parameterized
// void rev(int r, int n){
//     if(n==0){
//         cout<<r;
//         return;
//     }
//     rev(r*10 + n%10,n/10);
// }
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     rev(0,n);
// }



