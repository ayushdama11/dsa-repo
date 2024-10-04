// ** Binary to Decimal and Decimal to Binary

// #include<iostream>
// using namespace std;

// int binary_to_decimal(string &binary) {
//     int n = binary.size();
//     int result = 0;
//     for(int i = n-1; i>=0 ; i--){
//         char ch = binary[i]; 
//         int num = ch - '0';
//         result = result + num*(1 << (n-i-1));
//     }
//     return result;
// }

// string decimal_to_binary(int num) {
//     string result = "";
//     while(num>0) {
//         if(num % 2 == 0) {  // even
//             result = "0" + result;
//         } else {    // odd
//             result = "1" + result;
//         }
         // num = num / 2;
//         num = num >> 1 ;
//     }
//     return result;
// } 

// int main() {
//     string str = "001101";
//     cout<<binary_to_decimal(str)<<"\n";
//     cout<<decimal_to_binary(13);
//     return 0;
// }


// ** Find the number of set bits for any integer n
// ** Brian Kernighan Algorithm

// #include<iostream>
// using namespace std;
// int count_set_bits(int n) {
//     return __builtin_popcount(n);
// }

// int count_set_bits_2(int n){
//     int count = 0;
//     while(n>0){
//         count++;
//         n = (n & (n-1));
//     }
//     return count;
// }

// int main() {
//     cout<< count_set_bits(13)<<"\n";
//     cout<<count_set_bits_2(13)<<"\n";
// }


// ** Given an integer n , find the maximum power of two that is "smaller" than n 

// #include<iostream>
// using namespace std;

// int max_power_of2(int n) {
//     n = n | (n>>1);
//     n = n | (n>>2);
//     n = n | (n>>4);
//     n = n | (n>>8);
//     n = n | (n>>16);

//     // return (n+1) / 2;
//     return (n+1) >> 1;  // doing right shift
// }

// int main() {
//     int x = 24;

    // int temp;
    // while(x != 0) {
    //     temp = x;
    //     x = x & (x-1);
    // }
    // cout<<temp<<"\n";

//     cout << max_power_of2(x);
//     return 0;
// }


// ** Given an integer n , flip all the bits i.e if given bit is 1 , change it to 0 and vice versa

// #include<iostream>
// using namespace std;
// int main() {
//     int x = 23;
//     int cp = x; 
//     // calculating max power of 2 < n
//     int temp;
//     while(x != 0) {
//         temp = x;
//         x = x & (x-1);
//     }

//     // convert the whole bits to set bits
//     temp = (temp << 1) - 1;

//     // doing xor operation
//     cout<< (cp ^ temp);

//     return 0;
// }


// ** Calculating minimum number of bit flip required for converting from one number to another .

// #include<iostream>
// using namespace std;
// int main() {
//     int x = 23;
//     int y = 31;
//     cout << __builtin_popcount(x^y)<< "\n";
//     return 0;
// }


// ** Given an integer array where every element occurs twice except one occurs only once. find that unique element

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {4,4,1,3,2,3,5,1,2};
//     int n = 9;
//     int res = 0;
//     for(int i=0; i<n; i++) {
//         res = res ^ arr[i];
//     }
//     cout<< res << "\n";     // 5
//     return 0;
// }


// ** Given an integer array nums, in which exactly two elements appear only once and all other elements appear exactly twice. Find the two elements that appear only once 

// #include<iostream>
// using namespace std;

// void findUnique(int *arr, int n) {
//     int res = 0;
//     for(int i=0; i < n; i++) res = res ^ arr[i];
//     int temp = res;
//     int k = 0;
//     while(true) {
//         if((temp & 1) == 1) {
//             break;
//         }
//         temp = temp >> 1;
//         k++;
//     }

//     int retval = 0;
//     for(int i = 0 ; i < n ; i++) {
//         int num = arr[i];
//         if(((num >> k) & 1) == 1) retval ^= num;
//     }
//     cout<< retval <<" ";
//     res = retval ^ res;
//     cout<<res<<" ";
// }

// int main() {
//     int arr[] = {1,2,1,3,2,5};
//     int n = 6;
//     findUnique(arr, n);
//     return 0;
// }


// ** given an integer array . find the length of the longest subarray which has maximum possible bitwise AND value

// #include<iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int arr[] = {12,3,1,6,1,18,6,6,6,4,3,8,13,13,13,8};
//     int n = 17;
//     int ans = 0;
//     int max_el = INT_MIN;
//     int count = 0;
//     for(int i = 0; i<n; i++) {
//         if(arr[i]>max_el) {
//             max_el = arr[i];
//             count = 1;

//         } else if (arr[i] == max_el) {
//             count++;
//         }

//         ans = max(ans, count);
//     }
//     cout<< ans;
//     return 0;
// }


// ** Modulo operator - modulo 10^9 + 7

// **Print factorial of first 25 natural numbers and modulo the result by 10^9 + 7

#include <iostream>
#include <vector>
using namespace std;

vector<long long int> factorial(int n) {
    vector<long long int> fact(n+1, 1);
    // int MOD = 1000000000 + 7;
    int MOD = 1000000007;
    for(int i = 2; i<=n ; i++) {
        fact[i] = ((i%MOD) * (fact[i-1]%MOD) ) %MOD;
    }
    return fact;
}

int main() {    
    vector<long long int> res = factorial(25);
    for(int i = 0; i < res.size() ; i++ ) {
        cout<< i << "! = "<<res[i]<<"\n";
    }
    return 0;
}

