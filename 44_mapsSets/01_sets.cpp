#include <iostream>
#include <unordered_set>    // for using set in the function
using namespace std;
int main() {
    unordered_set<int> s;
    s.insert(1); 
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout<<s.size()<<endl;   // 5

    s.erase(2);
    cout<<s.size()<<endl;       // 4

    // ** s.find() -> it searchhes in the set , and if it is not found then it return the last element
    // ** s.end() -> last element in the set to search
    int target = 4;
    if(s.find(target)!=s.end()) {       // means target exists -> if we write ** !=s.end() **
        cout<<"exists"<<endl;
    } else cout<<"dne"<<endl;

    // for printing the elemnts of the set , we use *** for each *** loop
    for(int ele : s) {
        cout<<ele<<" ";
    }
}     