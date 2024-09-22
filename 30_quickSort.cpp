// Inbuilt sorting - tc - O(NLogN)
// Quick sort is the best algorithm for sorting 
// tc - O(NLogN) , sc - O(LognN)
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int partition(int arr[], int si, int ei){
//     // int pivotElement = arr[si];
//     int pivotElement = arr[(si+ei)/2];
//     int count = 0;
    
//     // count total number of smallest number than the pivot
//     // si+1 islie kyuki agar wo khudko b count kar lia to galat answer ajaega

//     // for(int i=si+1; i<=ei; i++){
//     for(int i=si; i<=ei; i++){
//         if(i==(si+ei)/2) continue;
//         if(arr[i]<=pivotElement) count++;
//     }
//     int pivotIdx = count + si;      // count+si islie for the elements jo pivot element ke aage hoge jab ham unhe sort karege tab kam aega
//     // swap kar do jo ele pivot Index pe hai wo aur starting me jo haiu wo
//     // swap(arr[si],arr[pivotIdx]);
//     swap(arr[(si+ei)/2],arr[pivotIdx]);
//     // ab jo bhi arr[pivotidx] se chote element hoge unhe pivotindex k age kr do aur bado ko pivotidx ke bad kar do
//     int i = si;
//     int j = ei;
//     while(i<pivotIdx && j>pivotIdx){
//         if(arr[i]<=pivotElement) i++;
//         if(arr[j]>pivotElement) j--;
//         else if(arr[i]>pivotElement && arr[j]<=pivotElement){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIdx;
// }
// void quicksort(int arr[], int si, int ei){
//     if(si>=ei) return;      // jab 1 hi element bacha hoga tab return hojaega basically
//     // 5,1,8,2,7,6,3,4
//     int pi =  partition(arr,si,ei);
//     // 4,1,3,2,5,7,8,6
//     quicksort(arr,si,pi-1);     // quicksort till pivot idx
//     quicksort(arr,pi+1,ei);     // quicksort after pivot idx
// }
// int main(){
//     int arr[] = {5,1,8,2,7,6,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     quicksort(arr,0,n-1);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// ** Quick Select
#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[], int si, int ei){
    // int pivotElement = arr[si];
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    
    // count total number of smallest number than the pivot
    // si+1 islie kyuki agar wo khudko b count kar lia to galat answer ajaega

    // for(int i=si+1; i<=ei; i++){
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count + si;      // count+si islie for the elements jo pivot element ke aage hoge jab ham unhe sort karege tab kam aega
    // swap kar do jo ele pivot Index pe hai wo aur starting me jo haiu wo
    // swap(arr[si],arr[pivotIdx]);
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    // ab jo bhi arr[pivotidx] se chote element hoge unhe pivotindex k age kr do aur bado ko pivotidx ke bad kar do
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int kthSmallest(int arr[], int si, int ei, int k){
    int pi =  partition(arr,si,ei);
    if((pi+1)==k) return arr[pi];
    // agar pi+1 agar wo k se chota hai to uske age wale elements bhi chote hi hoge to koi matlab nai waha quicksort lagaane ki 
    else if(pi+1<k) return kthSmallest(arr,pi+1,ei,k); 
    else return kthSmallest(arr,si,pi-1,k);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 3; // 3rd smallest element
    cout<<kthSmallest(arr,0,n-1,k);     // 3
}