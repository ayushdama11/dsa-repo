#include <iostream>
#include <queue>
using namespace std;
void heapSort(int arr[], int n) {
    priority_queue<int> pq;
    for(int i=0; i<n; i++) {
        pq.push(arr[i]);
    }
    for(int i=n-1; i>=0; i--) {
        arr[i] = pq.top();
        pq.pop();
    }
}
void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[] = {10, 1, 2, 20, 5, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    display(arr, n);
}