// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     // cout<<st.size()<<endl;   // 4
//     // st.pop();
//     // cout<<st.size()<<endl;   // 3 
//     // cout<<st.top();     // 30
//     // cout<<s t;
//     st.push(50);

//     // ** printing in reverse order - but this will delete all the ele 
//     // while(st.size()>0) {
//     //     cout<<st.top()<<" ";
//     //     st.pop();
//     // }


//     // ** printing - without loosing elements
//     // we will use extra stack
//     stack<int> temp;
//     while(st.size()>0) {
//         cout<<st.top()<<" ";    // to print ele of stack " top to bottom "
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
//     // putting elements back from temp to st
//     while(temp.size()>0) {
//         cout<<temp.top()<<" ";      // to print ele of stack " bottom to top "
//         st.push(temp.top());
//         temp.pop();
//     }

//     cout<<endl<<st.top();
// }




// *** Reverse a stack :- 
// make two extra stacks 
// #include <iostream>
// #include <stack>
// using namespace std;

// void print(stack<int>& st) {
//     stack<int> temp;
//     while(st.size()>0) {
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
//     // putting elements back from temp to st
//     while(temp.size()>0) {
//         cout<<temp.top()<<" ";      // to print ele of stack " bottom to top "
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     stack<int> gt;
//     stack<int> rt;

//     print(st);

//     // empty st into gt
//     while(st.size()>0) {
//         gt.push(st.top());
//         st.pop();
//     }

//     // empty gt into rt
//     while(gt.size()>0) {
//         rt.push(gt.top());
//         gt.pop();
//     }

//     // empty rt back into st
//     while(rt.size()>0) {
//         st.push(rt.top());
//         rt.pop();
//     }

//     // cout<<endl<<st.top();   // 10
//     print(st);
// }


// ** Push at bottom / any index :-
#include <iostream>
#include <stack>
using namespace std;

void print(stack<int>& st) {
    stack<int> temp;
    while(st.size()>0) {
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st
    while(temp.size()>0) {
        cout<<temp.top()<<" ";      // to print ele of stack " bottom to top "
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

void pushAtBottom(stack<int>& st, int val) {
    stack<int> helper;
    while(st.size()>0) {
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0) {
        st.push(helper.top());
        helper.pop();
    }
}

void pushAtIdx(stack<int>& st, int idx, int val) {
    stack<int> helper;
    while(st.size()>idx) {
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0) {
        st.push(helper.top());
        helper.pop();
    }
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> gt;
    stack<int> rt;
    print(st);
     
    pushAtBottom(st,80);
    print(st);

    pushAtIdx(st,2,100);
    print(st);
}