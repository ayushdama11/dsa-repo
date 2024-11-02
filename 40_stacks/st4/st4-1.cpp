// ** infix notation :- 
// #include <iostream>
// #include <stack>
// using namespace std;
// int prio(char ch) {
//     if(ch == '+' || ch == '-') return 1;
//     else return 2;      // * , / 
// }
// int solve(int val1, int val2, int ch) {
//     if(ch=='+') return val1 + val2;
//     else if(ch=='-') return val1 - val2;
//     else if(ch=='*') return val1 * val2;
//     else return val1 / val2;
// }
// int main() {
//     string s = "2+6*4/8-3";     // infix expression
//     // we need two stacks , 1 for val , 1 for operator
//     stack<int> val;
//     stack<char> op;
//     for(int i=0; i<s.length(); i++) {
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(s[i]-48);
//         }
//         else {  // not a digit - * / + -
//             if(op.size()==0) op.push(s[i]); 
//             else if(prio(s[i]) > prio(op.top())) op.push(s[i]);
//             else {      // work , priority(s[i]) <= priority(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())) {
//                     // i have to do val1 op val2 - while loop me
//                     char ch = op.top();
//                     op.pop();
//                     int val2 = val.top();
//                     val.pop();
//                     int val1 = val.top();
//                     val.pop();
//                     int ans = solve(val1, val2, ch);
//                     val.push(ans);
//                 }
//                 op.push(s[i]);      // kaam karne k bad agle operator ko push kardo operator stack me 
//             }
//         }
//     }
//     // the stack can still have some values - so make it empty
//     while(op.size()>0) {
//         char ch = op.top();
//         op.pop();
//         int val2 = val.top();
//         val.pop();
//         int val1 = val.top();
//         val.pop();
//         int ans = solve(val1, val2, ch);
//         val.push(ans);
//     }
//     cout<<val.top()<<endl;
// }



// *** infix with brackets
// #include <iostream>
// #include <stack>
// using namespace std;
// int prio(char ch) {
//     if(ch == '+' || ch == '-') return 1;
//     else return 2;      // * , / 
// }
// int solve(int val1, int val2, int ch) {
//     if(ch=='+') return val1 + val2;
//     else if(ch=='-') return val1 - val2;
//     else if(ch=='*') return val1 * val2;
//     else return val1 / val2;
// }
// int main() {
//     string s = "(7+9)*4/8-3";     // infix expression
//     // we need two stacks , 1 for val , 1 for operator
//     stack<int> val;
//     stack<char> op;
//     for(int i=0; i<s.length(); i++) {
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(s[i]-48);
//         }
//         else {  // not a digit - * / + -
//             if(op.size()==0) op.push(s[i]); 
//             else if(s[i]=='(') op.push(s[i]);
//             else if(op.top()=='(') op.push(s[i]);
//             else if(s[i]==')') {    // kaam karna hai
//                 while(op.top()!='(') {   // op.top() != opening bracket i.e (
//                     // work
//                     char ch = op.top();
//                     op.pop();
//                     int val2 = val.top(); 
//                     val.pop();
//                     int val1 = val.top();
//                     val.pop();
//                     int ans = solve(val1, val2, ch);
//                     val.push(ans);
//                 }
//                 op.pop();   // popping out the opening bracket from the stack 
//             }
//             else if(prio(s[i]) > prio(op.top())) op.push(s[i]);
//             else {      // work , priority(s[i]) <= priority(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())) {
//                     // i have to do val1 op val2 - while loop me
//                     char ch = op.top();
//                     op.pop();
//                     int val2 = val.top();
//                     val.pop();
//                     int val1 = val.top();
//                     val.pop();
//                     int ans = solve(val1, val2, ch);
//                     val.push(ans);
//                 }
//                 op.push(s[i]);      // kaam karne k bad agle operator ko push kardo operator stack me 
//             }
//         }
//     }
//     // the stack can still have some values - so make it empty
//     while(op.size()>0) {
//         char ch = op.top();
//         op.pop();
//         int val2 = val.top();
//         val.pop();
//         int val1 = val.top();
//         val.pop();
//         int ans = solve(val1, val2, ch);
//         val.push(ans);
//     }
//     cout<<val.top()<<endl;
// }


// ** Infix to prefix conversion :-
// #include <iostream>
// #include <stack>
// using namespace std;
// int prio(char ch) {
//     if(ch == '+' || ch == '-') return 1;
//     else return 2;      // * , / 
// }
// string solve(string val1, string val2, char ch) {
//     // we have to store prefix in the ans
//     // prefix is = op v1 v2
//     string s = "";
//     s.push_back(ch);        // agar string k andar kisi char ko dalna ho to push_back use kia karo
//     s += val1;      // agar string k andar kisi string ko dalna ho 
//     s += val2;
//     return s;
// }
// int main() {
//     string s = "(7+9)*4/8-3";     // infix expression
//     // we need two stacks , 1 for val , 1 for operator
//     stack<string> val;
//     stack<char> op;
//     for(int i=0; i<s.length(); i++) {
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(to_string(s[i]-48));
//         }
//         else {  // not a digit - * / + -
//             if(op.size()==0) op.push(s[i]); 
//             else if(s[i]=='(') op.push(s[i]);
//             else if(op.top()=='(') op.push(s[i]);
//             else if(s[i]==')') {    // kaam karna hai
//                 while(op.top()!='(') {   // op.top() != opening bracket i.e (
//                     // work
//                     char ch = op.top();
//                     op.pop();
//                     string val2 = val.top(); 
//                     val.pop();
//                     string val1 = val.top();
//                     val.pop();
//                     string ans = solve(val1, val2, ch);
//                     val.push(ans);
//                 }
//                 op.pop();   // popping out the opening bracket from the stack 
//             }
//             else if(prio(s[i]) > prio(op.top())) op.push(s[i]);
//             else {      // work , priority(s[i]) <= priority(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())) {
//                     // i have to do val1 op val2 - while loop me
//                     char ch = op.top();
//                     op.pop();
//                     string val2 = val.top();
//                     val.pop();
//                     string val1 = val.top();
//                     val.pop();
//                     string ans = solve(val1, val2, ch);
//                     val.push(ans);
//                 }
//                 op.push(s[i]);      // kaam karne k bad agle operator ko push kardo operator stack me 
//             }
//         }
//     }
//     // the stack can still have some values - so make it empty
//     while(op.size()>0) {
//         char ch = op.top();
//         op.pop();
//         string val2 = val.top();
//         val.pop();
//         string val1 = val.top();
//         val.pop();
//         string ans = solve(val1, val2, ch);
//         val.push(ans);
//     }
//     cout<<val.top()<<endl;
// }


// ** Infix to postfix conversion :- 
// #include <iostream>
// #include <stack>
// using namespace std;
// int prio(char ch) {
//     if(ch == '+' || ch == '-') return 1;
//     else return 2;      // * , / 
// }
// string solve(string val1, string val2, char ch) {
//     // we have to store prefix in the ans
//     // prefix is = op v1 v2
//     string s = "";
//     s += val1;      // agar string k andar kisi string ko dalna ho 
//     s += val2;
//     s.push_back(ch);        // agar string k andar kisi char ko dalna ho to push_back use kia karo
//     return s;
// }
// int main() {
//     string s = "(7+9)*4/8-3";     // infix expression
//     // we need two stacks , 1 for val , 1 for operator
//     stack<string> val;
//     stack<char> op;
//     for(int i=0; i<s.length(); i++) {
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(to_string(s[i]-48));
//         }
//         else {  // not a digit - * / + -
//             if(op.size()==0) op.push(s[i]); 
//             else if(s[i]=='(') op.push(s[i]);
//             else if(op.top()=='(') op.push(s[i]);
//             else if(s[i]==')') {    // kaam karna hai
//                 while(op.top()!='(') {   // op.top() != opening bracket i.e (
//                     // work
//                     char ch = op.top();
//                     op.pop();
//                     string val2 = val.top(); 
//                     val.pop();
//                     string val1 = val.top();
//                     val.pop();
//                     string ans = solve(val1, val2, ch);
//                     val.push(ans);
//                 }
//                 op.pop();   // popping out the opening bracket from the stack 
//             }
//             else if(prio(s[i]) > prio(op.top())) op.push(s[i]);
//             else {      // work , priority(s[i]) <= priority(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())) {
//                     // i have to do val1 op val2 - while loop me
//                     char ch = op.top();
//                     op.pop();
//                     string val2 = val.top();
//                     val.pop();
//                     string val1 = val.top();
//                     val.pop();
//                     string ans = solve(val1, val2, ch);
//                     val.push(ans);
//                 }
//                 op.push(s[i]);      // kaam karne k bad agle operator ko push kardo operator stack me 
//             }
//         }
//     }
//     // the stack can still have some values - so make it empty
//     while(op.size()>0) {
//         char ch = op.top();
//         op.pop();
//         string val2 = val.top();
//         val.pop();
//         string val1 = val.top();
//         val.pop();
//         string ans = solve(val1, val2, ch);
//         val.push(ans);
//     }
//     cout<<val.top()<<endl;
// }


// ** Postfix evaluation :-
// #include <iostream>
// #include <stack>
// using namespace std;
// int solve(int val1, int val2, int ch) {
//     if(ch=='+') return val1+val2;
//     else if(ch=='-') return val1-val2;
//     else if(ch=='*') return val1*val2;
//     else return val1/val2;
// }
// int main() {
//     string s = "79+4*8/3-";     // postfix expression
//     // we need only 1 stack
//     stack<int> val;
//     for(int i=0; i<s.length(); i++) {
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(s[i]-48);
//         }
//         else {  // not a digit - * / + -  [ - no brackets are there ]
//             // kaam - val1 val2 op
//             int val2 = val.top();
//             val.pop();
//             int val1 = val.top();
//             val.pop();
//             int ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// }


// ** Postfix to Infix Notation
// #include <iostream>
// #include <stack>
// using namespace std;
// string solve(string val1, string val2, int ch) {
//     string s = "";
//     s += val1;
//     s.push_back(ch);
//     s += val2;
//     return s;
// }
// int main() {
//     string s = "79+4*8/3-";     // postfix expression
//     // we need only 1 stack
//     stack<string> val;
//     for(int i=0; i<s.length(); i++) {
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(to_string(s[i]-48));
//         }
//         else {  // not a digit - * / + -  [ - no brackets are there ]
//             // kaam - val1 val2 op
//             string val2 = val.top();
//             val.pop();
//             string val1 = val.top();
//             val.pop();
//             string ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// }


// ** Postfix to Prefix conversion
// #include <iostream>
// #include <stack>
// using namespace std;
// string solve(string val1, string val2, int ch) {
//     string s = "";
//     s.push_back(ch);
//     s += val1;
//     s += val2;
//     return s;
// }
// int main() {
//     string s = "79+4*8/3-";     // postfix expression
//     // we need only 1 stack
//     stack<string> val;
//     for(int i=0; i<s.length(); i++) {
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(to_string(s[i]-48));
//         }
//         else {  // not a digit - * / + -  [ - no brackets are there ]
//             // kaam - val1 val2 op
//             string val2 = val.top();
//             val.pop();
//             string val1 = val.top();
//             val.pop();
//             string ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// }


// ** Prefix Evaluation :-
// #include <iostream>
// #include <stack>
// using namespace std;
// string solve(string val1, string val2, int ch) {
//     string s = "";
//     s.push_back(ch);
//     s += val1;
//     s += val2;
//     return s;
// }
// int main() {
//     string s = "-/*+79483";     // prefix expression
//     // we need only 1 stack
//     stack<string> val;
//     for(int i=s.length()-1; i>=0; i--) {    // loop piche se chalega 
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(to_string(s[i]-48));
//         }
//         else {  // not a digit - * / + -  [ - no brackets are there ]
//             // kaam - val1 val2 op
//             string val1 = val.top();
//             val.pop();
//             string val2 = val.top();
//             val.pop();
//             string ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// }


// ** Prefix to infix conversion
// #include <iostream>
// #include <stack>
// using namespace std;
// string solve(string val1, string val2, int ch) {
//     // pre to in
//     // infix is : v1 op v2
//     string s = "";
//     s += val1;
//     s.push_back(ch);
//     s += val2;
//     return s;
// }
// int main() {
//     string s = "-/*+79483";     // prefix expression
//     // we need only 1 stack
//     stack<string> val;
//     for(int i=s.length()-1; i>=0; i--) {    // loop piche se chalega 
//         // check if s[i] is a digit (0-9)
//         if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
//             val.push(to_string(s[i]-48));
//         }
//         else {  // not a digit - * / + -  [ - no brackets are there ]
//             // kaam - val1 val2 op
//             string val1 = val.top();
//             val.pop();
//             string val2 = val.top();
//             val.pop();
//             string ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// }


// ** Prefix to Postfix conversion
#include <iostream>
#include <stack>
using namespace std;
string solve(string val1, string val2, int ch) {
    // pre to in
    // postfix is : v1 v2 op
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main() {
    string s = "-/*+79483";     // prefix expression
    // we need only 1 stack
    stack<string> val;
    for(int i=s.length()-1; i>=0; i--) {    // loop piche se chalega 
        // check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57) {  // ascii check hoga
            val.push(to_string(s[i]-48));
        }
        else {  // not a digit - * / + -  [ - no brackets are there ]
            // kaam - val1 val2 op
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}