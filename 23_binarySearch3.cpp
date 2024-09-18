//*** BINARY SEARCH ON ANSWER */

//** capacity to ship packages within D days */ leetcode 1011
// class Solution {
// public:
    // time complexity - O(n*log(sum-max))

//     bool check(int mid, vector<int>& weights, int days){
//         int n= weights.size();
//         int m= mid;
//         int count= 1; //no. of days
//         for(int i=0; i<n; i++){
//             if(m>=weights[i]){
//                 m -= weights[i];
//             }
//             else{
//                 count++;
//                 m= mid;
//                 m -= weights[i];
//             }
//         }
//         if(count>days) return false;
//         else return true;
//     }

//     int shipWithinDays(vector<int>& weights, int days) {
        //lo= max ele of array
        //hi= sum of array
//         int n= weights.size();
//         int max= INT_MIN;
//         int sum= 0;

//         for(int i=0; i<n; i++){
//             if(max<weights[i]) max=weights[i];
//             sum += weights[i];
//         }

//         int lo= max;
//         int hi= sum;
//         int minCapacity = sum;
//         while(lo<=hi){
//             int mid= lo+(hi-lo)/2;
//             if(check(mid,weights,days)){
//                 minCapacity= mid;
//                 hi= mid-1;
//             }
//             else lo=mid+1;
//         }
//         return minCapacity;
//     }
// };


//** koko eating bananas */ leetcode 875
// class Solution {
// public:

//     bool check(int speed, vector<int> piles, int h){
//         int count= 0;
//         int n= piles.size();
//         for(int i=0; i<n; i++){
//             if(count>h) return false;
//             if(speed>=piles[i]) count++;
            // if piles[i] > speed than there are two conditions - 
//             else if(piles[i]%speed==0) count += piles[i]/speed; //if divisible
//             else count += piles[i]/speed+1; //when not divisble
//         }
//         if(count>h) return false;
//         else return true;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
        // h - no. of hours
//         int n= piles.size();
//         int mx= -1;
//         for(int i=0; i<n; i++){
//             mx= max(mx,piles[i]);
//         }
//         int lo= 1;
//         int hi= mx;
//         int ans= -1;
//         while(lo<=hi){
//             int mid= lo+(hi-lo)/2;
//             if(check(mid,piles,h)==true){
//                 ans= mid;
//                 hi= mid-1;
//             }
//             else lo= mid+1;
//         }
//         return ans;
//     }
// };


//** minimum time to complete trips */ leetcode 2187
// class Solution {
// public:
//     bool check(long long mid, vector<int>& time, int totalTrips){
//         long long trips=0;
//         int n=time.size();
//         for(int i=0; i<n; i++){
//             trips += mid/(long long)time[i];
//         }
//         if(trips<(long long)totalTrips) return false;
//         else return true;
//     }
//     long long minimumTime(vector<int>& time, int totalTrips) {
//         int n= time.size();
//         int mx= -1;
//         for(int i=0; i<n; i++){
//             mx= max(mx, time[i]);
//         }
//         long long lo= 1;
//         long long hi= (long long)mx*(long long)totalTrips;
//         long long ans= -1;
//         while(lo<=hi){
//             long long mid= lo+(hi-lo)/2;
//             if(check(mid, time, totalTrips)==true){
//                 ans=mid;
//                 hi=mid-1;
//             }
//             else lo=mid+1;
//         }
//         return ans;
//     }
// };


