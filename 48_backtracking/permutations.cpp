// Permutations 1

// #include <iostream>
// using namespace std;
// void permutations(string inp, string oup) {
//     if(inp.size() == 0) {
//         cout<<oup<<endl;
//         return;
//     }
//     for(int i=0; i<inp.size(); i++) {
//         char ch = inp[i];
//         permutations(inp.substr(0,i) + inp.substr(i+1), oup+ch);   
//     }
// }
// int main() {
//     permutations("abc", "");
// }


// Permutations 2 - with backtracking
#include <iostream>
#include <unordered_set>
using namespace std;
void permutations(string &str, int i) {
    if(i==str.size()-1) {
        cout<<str<<endl;
        return;
    }
    unordered_set<char> s;
    for(int idx=i; idx<str.size(); idx++) {
        // check for repeated characters 
        if(s.count(str[idx])) continue;
        s.insert(str[idx]);
        swap(str[idx], str[i]);
        permutations(str, i+1);
        swap(str[idx], str[i]);     // bring back to original posn
    }
}
int main() {
    string str = "aba";
    permutations(str, 0);
}