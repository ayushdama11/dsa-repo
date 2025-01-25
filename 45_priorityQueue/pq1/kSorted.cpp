#include <iostream>
#include <queue>
using namespace std;
int main() {
    int arr[] = {6,5,3,2,8,10,9};
    int k = 4;
    int n = sizeof(arr)/4;
    priority_queue< int, vector<int>, greater<int> > pq;        // minHeap
    vector<int> ans;
    // starting ke k eleemnts hi filled hoge 
    for(int i=0; i<n; i++) {
        pq.push(arr[i]);
        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        };
    }
    // to fill elements ahead of k 
    while(pq.size()>0) {
        ans.push_back(pq.top());
        pq.pop();
    };
    for(auto i : ans) cout<<i<<" ";
}