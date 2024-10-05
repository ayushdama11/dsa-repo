// ** basic prime function

// #include <iostream>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int fac = 0;
// bool isPrime(int n) {
//     if(n==1) return false;
    // for(int i = 2 ; i <= n-1 ; i++) {
    //     if(n % i == 0) return false;
    // }

//     for(int i = 2 ; i <= sqrt(n) ; i++) {
//         if(n % i == 0) {
//             fac = i;
//             return false;
//         } 
//     }
//     return true;
// }

// int main() {
//     cout<<isPrime(1001)<<endl;
//     cout<<fac;
// }


// ** Prime in Diagonal - Leetcode 2614

// time complexity - n root n

// class Solution {
// public:
//     bool isPrime(int n) {
//         if(n==1) return false;

//         for(int i = 2 ; i <= sqrt(n) ; i++) {
//             if(n % i == 0) return false; 
//         }
//         return true;
//     }

//     int diagonalPrime(vector<vector<int>>& nums) {
//         int mx = 0;
//         int n = nums.size();
//         for (int i = 0 ; i < n ; i++) {
//             if(isPrime(nums[i][i])) {
//                 mx = max(mx, nums[i][i]);
//             }
//             if(isPrime(nums[i][n-i-1])) {
//                 mx = max(mx, nums[i][n-i-1]);
//             }
//         }
//         return mx;
//     }
// };


// ** Finding factors of a number :-

// #include <iostream>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// void printFactors (int n) {
    // for (int i = 1 ; i <= n ; i++) {
    //     if (n % i == 0) cout << i << " ";
    // }

    // for (int i = 1 ; i <= sqrt(n) ; i++) {
    //     if (n % i == 0) {
    //         cout << i << " " ;
    //         if (i != sqrt(n)) {
    //             cout << n/i << " " << endl;
    //         }
    //     }
    // }

//     for (int i = 1 ; i < sqrt(n) ; i++) {
//         if (n % i == 0) cout << i << " " ;
//     }
//     for (int i = sqrt(n) ; i >= 1 ; i--) {
//         if (n % i == 0) cout << n/i << " " ;
//     }
// }

// int main() {
//     printFactors(24);
// }


// ** Leetcode 507 - Perfect Number

// class Solution {
// public:
//     bool checkPerfectNumber(int n) {
//         int sum = 0;
//         for (int i = 1 ; i < sqrt(n) ; i++) {
//             if (n % i == 0) sum += i;
//         }
//         for (int i = sqrt(n) ; i > 1 ; i--) {
//             if (n % i == 0) sum += n/i;
//         }
//         return (sum==n);
//     }
// };


// ** Smallest Value after replacing with sum of prime factors - Leetcode 2507

// class Solution {
// public:
//     bool isPrime(int n) {
//         if(n==1) return false;
//         for(int i = 2 ; i <= sqrt(n) ; i++) {
//             if(n % i == 0) return false;
//         }
//         return true;
//     }
    
//     int smallestValue(int n) {
//         if (isPrime(n)) return n;
//         int sum = 0;

        // to find ki wo prime factor kitni bar araa hai
//         for (int i = 1 ; i < sqrt(n) ; i++) {
//             if (n % i == 0 && isPrime(i)) {
//                 int m = n;
//                 while (m % i == 0) {
//                     sum += i; 
//                     m /= i;
//                 }
//             };
//         }
//         for (int i = sqrt(n) ; i > 1 ; i--) {
//             if (n % i == 0 && isPrime(n/i)) {
//                 int m = n;
//                 while (m % (n/i) == 0) {
//                     sum += (n/i); 
//                     m /= (n/i);
//                 }
//             }
//         }
//         if(sum==n) return n;
//         return smallestValue(sum);
//     }
// };


// ** Count Primes - Leetcode 204
// ** Sieve of Erastosthenes

// M1 - best
// class Solution {
// public:
//     int countPrimes(int n) {
//         ios::sync_with_stdio(0);
//         cin.tie(0);
        
//         int cnt = 0;
//         vector<bool> prime(n + 1, true);
//         prime[0] = prime[1] = false;
//         for (int i = 2; i < n; i++) {
//             if (prime[i]) {
//                 cnt++;
//                 for (int j = i * 2; j < n; j = j + i) {
//                     prime[j] = 0;
//                 }
//             }
//         }
//         return cnt;
//     }
// };


// M-2
// class Solution {
// public:
//     void fillSieve(vector<bool>& sieve) {
//         int n = sieve.size()-1;
//         for(int i = 2 ; i <= sqrt(n) ; i++) {
//             for(int j = i*2; j<=n; j+=i) {
//                 sieve[j] = 0;
//             }
//         }
//     }
// 
//     int countPrimes(int n) {
//         if(n<=2) return 0;
//         n = n - 1;
//         int count = 0;
//         // n+1 size  islie kyuki hame jo index hai wahi number chahie us jagah
//         vector<bool> sieve(n+1,1);  // 1 means prime , 0 means not prime
//         fillSieve(sieve);
//         sieve[0] = 0;
//         sieve[1] = 0;
//         for(int i = 2 ; i <= n ; i++) {
//             if(sieve[i] == 1) count++;
//         }
//         return count;
//     }
// };


// ** distinct Prime factors of product of Array :- Leetcode 2521
// class Solution {
// public:
//     void fillSieve(vector<bool>& sieve) {
//         int n = sieve.size()-1;
//         for(int i = 2 ; i <= sqrt(n) ; i++) {
//             for(int j = i*2; j<=n; j+=i) {
//                 sieve[j] = 0;
//             }
//         }
//     }

//     int distinctPrimeFactors(vector<int>& nums) {
//         int n = nums.size();
//         int mx = -1;

        // finding the maximum number
//         for(int i = 0 ; i < n ; i++) {
//             mx = max(mx,nums[i]);
//         }

        // creating a sieve
//         vector<bool> sieve(mx+1,1);     // 1 means prime
//         if(mx+1>0) sieve[0] = 0;
//         if(mx+1>1) sieve[1] = 1;
//         fillSieve(sieve);

        // filling primes vector - contains all the prime numbers upto mx
//         vector<int> primes;
//         for(int i=2; i<=mx; i++) {
//             if(sieve[i] == 1) primes.push_back(i);
//         }

        // agar primes vector ke jo elements hai wo agar array k kisi bhi element se divide hojate hai to ham taken vector me use 1 kar dege
//         vector<bool> taken(primes.size(),0);
//         for(int i = 0 ; i < nums.size() ; i++) {
//             int ele = nums[i];
//             for(int j = 0 ; j < primes.size() ; j++) {
//                 if(primes[j]>ele) break;
//                 if(ele % primes[j]==0) taken[j] = 1;
//             }
//         }

//         int count = 0;
//         for(int i=0; i<taken.size(); i++) {
//             if(taken[i] == 1) count++;
//         }

//         return count;
//     }
// };


// ** 2 Keys Keyboard - Leetcode 650
// class Solution {
// public:
// Time complexity = O((rootN) Logn)
//     int gd(int n) {

        // n/2 kyuki n ka jo highest factor rahega wo uska adha hi hoga
        // for(int i = n/2; i>=1; i--) {
        //     if (n%i==0) return i;
        // }

//         for(int i = 2; i<=sqrt(n); i++) {
//             if (n%i==0) return n/i;
//         }

//         return 1;
//     }

//     bool isPrime(int n) {
//         if(n==1) return false;
//         for(int i = 2 ; i <= sqrt(n) ; i++) {
//             if(n % i == 0) return false;
//         }
//         return true;
//     }

//     int minSteps(int n) {
//         int count = 0;
//         while(n > 1) {

            // if n is prime 
//             if(isPrime(n)) {
//                 count += n;
//                 break;
//             }

//             int hf = gd(n);     // to find greatest divisor 
//             count += (n/hf);
//             n = hf;
//         }
//         return count;
//     }
// };


// ** Ugly Number - Leetcode 263
// class Solution {
// public:
//     bool isUgly(int n) {
//         if(n==0) return false;
//         while (n%2==0) n /= 2;
//         while (n%3==0) n /= 3;
//         while (n%5==0) n /= 5;

//         return (n==1);
//     }
// };