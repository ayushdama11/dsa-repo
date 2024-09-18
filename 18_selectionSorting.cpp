//** Selection sort */
// example - arr = 5,3,1,4,2
// 1,3,5,4,2 => 1,2,5,4,3 => 1,2,3,4,5 => 1,2,3,4,5
// it cannot be optimized like bubble sorting

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]= {5,3,1,4,2};
    int n=5;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

//** Selection sort */
    for(int i=0; i<n-1; i++){
        int min= INT_MAX;
        int mindx= -1;
        // minimum element calculation in orange box
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min= arr[j];
                mindx= j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}

//** Time complexity */
// worst case, best case, average case = O(n^2)

//** Space complexity = O(1) */

// Selection sort is not a stable sorting algorithm i.e unstable algorithm

//** Usecases */
// cost of swapping - because here there are very minimum swaps
// when starting se 'k' min ele nikalne ho out of n
// if size of array is small then we use selection sort algo.
