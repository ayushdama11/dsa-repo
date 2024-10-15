//** peak index in mountain array */ leetcode 852 
// O(n)
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n= arr.size();
//         for(int i=1; i<=n-2;i++){
//             if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//                 idx= i;
//                 break;
//             }
//         }
//         return idx;
//     }
// };

// O(logn) 
// class Solution { 
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n= arr.size();
//         int lo= 1;
//         int hi= n-2;
//         while(lo<=hi){
//             int mid= (lo+hi)/2;
//             if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
//             else if(arr[mid]>arr[mid+1]) hi=mid-1;
//             else lo= mid+1;
//         }
//         return 100; // it will not run we are just doing it because it is int function.
//     }
// };

//** search in rotated sorted array */ leetcode 33 
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        // task 1 - to find the pivot ele/index - that ele which is smaller than
        // its right and left ele

        // 1 3 4 5 6 8 20 28 33
        // 6 8 20 28 33 1 3 4 5 -after rotation
        // 1 pivot

//         int n = nums.size();
//         int lo = 0;
//         int hi = n - 1;
//         if (n == 2) {
//             if (target == nums[0])
//                 return 0;
//             else if (target == nums[1])
//                 return 1;
//             else
//                 return -1;
//         }

        // finding pivot ele/index
//         int pivot = -1; // smallest ele
//         while (lo <= hi) {
//             int mid = (lo + hi) / 2;
//             if (mid == 0)
//                 lo = mid + 1; // first ele
//             else if (mid == n - 1)
//                 hi = mid - 1;
//             else if (nums[mid] < nums[mid + 1] && nums[mid] < nums[mid - 1]) {
//                 pivot = mid;
//                 break;
//             } else if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
//                 pivot = mid + 1;
//                 break;
//             } else if (nums[mid] > nums[hi])
//                 lo = mid + 1;
//             else
//                 hi = mid - 1; // nums[mid]<nums[hi]
//         }

        // array is sorted- no rotation- simple binary search
//         if (pivot == -1) {
//             lo = 0;
//             hi = n - 1;
            // normal binary search in full array
//             while (lo <= hi) {
//                 int mid = (lo + hi) / 2;
//                 if (nums[mid] == target)
//                     return mid;
//                 else if (nums[mid] > target)
//                     hi = mid - 1;
//                 else
//                     lo = mid + 1;
//             }
//             return -1;
//         }

        // task 2- to find target
//         if (target >= nums[0] && target <= nums[pivot - 1]) {
//             lo = 0;
//             hi = pivot - 1;
//             while (lo <= hi) {
//                 int mid = (lo + hi) / 2;
//                 if (nums[mid] == target)
//                     return mid;
//                 else if (nums[mid] > target)
//                     hi = mid - 1;
//                 else
//                     lo = mid + 1;
//             }
//         } else {
//             lo = pivot;
//             hi = n - 1;
//             while (lo <= hi) {
//                 int mid = (lo + hi) / 2;
//                 if (nums[mid] == target)
//                     return mid;
//                 else if (nums[mid] > target)
//                     hi = mid - 1;
//                 else
//                     lo = mid + 1;
//             }
//         }
//         return -1;
//     }
// };



//** find k closest elements */ leetcode 658
// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // ** space complexity - O(k)
        // ** time complexity - O(logn + klogk)
        
        // x is target, k is total closest ele of x
//         int n= arr.size();
//         vector<int> ans(k); //k ele ko insert karuga

        // if x is not in array and "smaller than first ele"
//         if(x<arr[0]){
//             for(int i=0; i<k; i++){
//                 ans[i]=arr[i];
//             }
//             return ans;
//         }   

        // if x is not in array and greater than last ele 
//         if(x>arr[n-1]){
//             int i= n-1;
//             int j= k-1;
//             while(j>=0){
//                 ans[j]= arr[i];
//                 j--;
//                 i--;
//             }
//             return ans;
//         }

        // ** if ele is there in the arr **
//         int lo=0;
//         int hi=n-1;
//         bool flag= false; //if ele is present in arr or not 
//         int t=0;    //representing index of ans
//         int mid=-1;


        // binary search
//         while(lo<=hi){
//             mid= lo+(hi-lo)/2;
//             if(arr[mid]==x){
//                 flag= true; //present
//                 ans[t]= arr[mid];
//                 t++;
//                 break;
//             }
//             else if(arr[mid]>x) hi=mid-1;
//             else lo=mid+1;
//         }

//         int lb= hi;    //if we not get ele in the arr 
//         int ub= lo;    

        //if ele is present
//         if(flag==true){
//             lb= mid-1;
//             ub= mid+1;
//         }
//         while(t<k && lb>=0 && ub<=n-1){
            //kon jyada close hai lb ya ub
//             int d1= abs(x-arr[lb]); //as we want mod - abs
//             int d2= abs(x-arr[ub]);
//             if(d1<=d2){
//                 ans[t]= arr[lb];
//                 lb--;
//             }
//             else{   //d1>d2
//                 ans[t]=arr[ub];
//                 ub++;
//             }
//             t++;
//         }

        //if lb<0 or ub>n-1
//         if(lb<0){
//             while(t<k){
//                 ans[t]= arr[ub];
//                 ub++;
//                 t++;
//             }
//         }
//         if(ub>n-1){
//             while(t<k){
//                 ans[t]= arr[lb];
//                 lb--;
//                 t++;
//             }
//         }

//         sort(ans.begin(),ans.end());    //O(klogk)
//         return ans;
//     }
// };



// ** sum of square numbers */ leetcode 633
// class Solution {
// public:
        // space complexity - O(1)
        // time complexity - O(root(c)) 

//     bool isPerfectSquare(int n){
//         int root= sqrt(n);
//         if(root*root==n) return true;
//         else return false;
//     }
//     bool judgeSquareSum(int c) {
//         int x= 0;
//         int y= c;
//         while(x<=y){
//             if(isPerfectSquare(x) && isPerfectSquare(y))
//                 return true;
//             else if(!isPerfectSquare(y)){
//                 y=(int)sqrt(y)*(int)sqrt(y);
//                 x=c-y;
//             }
//             else{   //x is not perfect sq.
//                 x=((int)(sqrt(x)+1))*((int)(sqrt(x)+1));
//                 y=c-x;
//             }
//         }
//         return false;
//     }
// };




