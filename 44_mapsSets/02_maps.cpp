#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // ** pair class / pair stl
    // pair<int, char> p;
    // p.first = 1;
    // p.second = 'a';
    // cout<<p.second;

    // map me pura ka pura pair insert hota hai ek sath 
    // ** so map is collection of pairs 
    unordered_map<string, int> m;       // pair class / map

    // ** method 1 - method 1 of inserting elements in the unordered map 
    pair<string, int> p1;
    p1.first = "raghav";
    p1.second = 76;

    // pair<string, int> p2;
    // p2.first = "harsh";
    // p2.second = 15;

    // pair<string, int> p3;
    // p3.first = "lokesh";
    // p3.second = 49;

    m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);

    // ** method 2 of inserting elements insde unordered map 
    m["Harsh"] = 15;
    m["Lokesh"] = 49;


    // printing using for each loop 
    // for(pair<string,int> p : m) {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    for(auto p : m) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    m.erase("raghav");      // removing elements from map 

    for(auto p : m) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.size()<<endl;   // 2
    
}