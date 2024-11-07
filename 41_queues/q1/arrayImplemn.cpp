// ** Array Implementation
#include <iostream>
#include <vector>
using namespace std;
class Queue {
public:
    int f;  // front
    int b;  // back
    vector<int> arr;    // to allocate the size of the array as given in parmeter of the constructore 
    Queue(int val){
        f = 0;
        b = 0;
        vector<int> v(val);     // val is size
        arr = v;
    }
    void push(int val) {
        if(b==arr.size()) {
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop() {
        if(f-b==0) {    // size = f - b
            cout<<"queue is empty"<<endl;
            return;
        }
        f++;
    }
    int front() {
        if(f-b==0) {    // size = f - b
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back() {
        if(f-b==0) {    // size = f - b
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size() {
        return b-f;
    }
    bool empty() {
        if(f-b==0) return true;
        else return false;
    }
    void display() {
        for(int i=f; i<b; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    Queue q(5);
    // push , pop , front , back , size , empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}