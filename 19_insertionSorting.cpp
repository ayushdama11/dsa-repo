//** Insertion sort */
// 5,3,1,4,2 => 3,5,1,4,2 => 3,1,5,4,2 => 1,3,5,4,2 => 1,3,4,5,2 => 1,3,4,2,5 => 1,3,2,4,5 => 1,2,3,4,5

#include<iostream>
using namespace std;
int main(){
    int arr[]= {5,30,1,-4,2};
    int n=5;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

//** Insertion sort */
    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}

//** Time complexity */
// worst case , avg case = O(n^2)
// best case = O(n)

//** Space complexity = O(1) */

// Insertion sort is a stable sorting algorithm
