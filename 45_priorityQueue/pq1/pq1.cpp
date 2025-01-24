#include <iostream>
#include <queue>
using namespace std;
int main() {

    // ** maxHeap
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(2);
    // pq.push(-6);
    // pq.push(8);
    // cout<<pq.top()<<endl;     // 10
    // pq.pop();   // 10 removed  
    // cout<<pq.top()<<endl;     // 8

    // ** minHeap
    priority_queue< int, vector<int>, greater<int> > pq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    cout<<pq.top()<<endl;     // -6
    pq.pop();   // 10 removed 
    cout<<pq.top()<<endl;     // 8
}