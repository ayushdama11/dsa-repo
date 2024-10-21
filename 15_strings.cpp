//string is array of characters 

// #include<iostream>
// using namespace std;
// int main()
// {
//     // char str[5]={'a','b','c','d','e'};   //string
//     string str[5]="abcd";  
//     for(int i=0;i<5;i++){
//         if(str[i]=="b") break; 
//         cout<<str[i]<<" ";
//     }
//     return 0;
// }

/*
#include<iostream>
using namespace std;
int main()
{
    // char str[10]={'a','b','c','d','e'};
    // // cout<<(int)(str[4]); //101
    // // cout<<(int)(str[5]); //returns 0 because of the /0 which is there at end of string
    // // for(int i=0;str[i]!='\0';i++){
    // //     cout<<str[i]<<" ";
    // // }
    // cout<<str<<endl; //abcde

    //basically cout<<str prints whole str until \0 

    char str[10]={'a','b','\0','c','d','e'};
    cout<<str; //ab
    return 0;
}*/

//string as datatype

// #include<iostream>
// #include<string> //for using string as datatype 
// using namespace std;
// int main()
// {
//     string str ="ayush dama"; //size of string=11 cauz null character
//     cout<<str<<endl;
//     cout<<str[0]<<endl;

//     //taking string input 
//     // string s;
//     // cin>>s;
//     // cout<<s;

//     //getting string having space
//     string s;
//     getline(cin,s); //for getting input of string which has space in between 
//     cout<<s;

//     return 0;
// }

//input a string of length n and count all the vowels in the given string
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="ayush";
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
}*/

//updation of single character in a string
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="ayush";
    cout<<str<<endl;
    str[1]='o';
    cout<<str<<endl; //so in c++ strings are mutable -> matlab ham update kar SKte hai
    return 0;
}*/

//input a string of length n and count all the vowels in the given string
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
}*/

//input a string of size n and update all the even positions in the string to character 'a'. consider 0-based indexing
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="ayush";
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str<<endl;
    
    return 0;
}*/

//Built-in string functions=
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="raghav garg is at PW";
    //size
    cout<<str.size()<<endl; //20
    cout<<str.length()<<endl; //20 same as .size() 
    int len=str.length(); //we can store it in variable
    //index will be 0 to str.lenght()-1

    string str1="abcd";
    //pushback
    cout<<str1<<endl;
    str1.push_back('e');//we can push a single character at the end of string
    cout<<str1<<endl;

    string s="ayush";
    //popback
    cout<<s<<endl;
    s.pop_back(); //removes last character of a string
    cout<<s<<endl;

    //appending in string using + operator
    string a="abc";
    cout<<a<<endl;
    string b="def";
    a=a+b;
    cout<<a<<endl;
    a=a+"ghij";
    cout<<a<<endl;
    a="xyz"+a;
    cout<<a<<endl;
    
    //reverse
    string st="abcdef";
    cout<<st<<endl;
    // reverse(st.begin(),st.end()); //reverse whole string
    // cout<<st<<endl;
    // reverse(st.begin()+2,st.end()-1); //abedcf
    // cout<<st<<endl;
    reverse(st.begin()+2,st.end()+5); //abedcf -> end me (index+1) dalege to bhi same result aegaa
    
    return 0;
}
*/

//input a string of even length and reverse the first half of the string
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //reverse first half
    int len=s.length();
    reverse(s.begin(),s.begin()+len/2);
    cout<<s;
}*/

//sub-string= substr()
/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="abcdef";
    cout<<s<<endl;
    cout<<s.substr(0)<<endl; //abcdef= 0th index ke bad ke substrings 
    cout<<s.substr(1)<<endl; //bcdef
    cout<<s.substr(2)<<endl; //cdef
    cout<<s.substr(1,3)<<endl; //bcd
    cout<<s.substr(2,2)<<endl; //cd
}*/

//input a string of even length and return the second half of that string using inbuilt substr function
/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string= ";
    getline(cin,str);
    //abcdefgh = efgh output hoga
    int n=str.length();
    cout<<str.substr(n/2);
    return 0;
}*/

//to_string() function= converts integer to string
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=12345;
    string s=to_string(x);
    cout<<s;
    return 0;
}
*/

//return the total number of digits in a number without using any loop
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=12345;
    string s=to_string(x);
    cout<<s.length();
    return 0;
}*/

//odd index pe #
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="";
    int n;
    cout<<"enter length of string= ";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        s.push_back(ch);
    }
    cout<<s<<endl;
    for(int i=0;i<n;i++){
        if(i%2!=0) s[i]='#';
    }
    cout<<s<<endl;
    return 0;
}*/

//count consonants
/*
#include<iostream>
#include<string>
using namespace std;
bool isConsonant(char ch){
    if(ch<65) return false; //matlab character hi nai hai
    else if(ch>90 && ch<97) return false;
    else if(ch>122) return false;
    else if(ch=='a' || ch=='A')return false;
    else if(ch=='e' || ch=='E')return false;
    else if(ch=='i' || ch=='I')return false;
    else if(ch=='o' || ch=='O')return false;
    else if(ch=='u' || ch=='U')return false;
    else return true;
}

int main(){
    string s;
    getline(cin,s);
    int count=0;//consonants
    for(int i=0;i<s.length();i++){
        if(isConsonant(s[i])) count++;
    }
    cout<<count<<endl;
}*/

//check whether the given string is palindrome or not
//racecar is palindrome string
/*
#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    if(isPalindrome(s)==true)
        cout<<"string is palindrome";
    else
        cout<<"string is not plaindrome";
    return 0;
}*/

//input a string of length less than 10 and convert it into a integer without using builtin function
// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     // int x=stoi(s); //builtin function to convert string to integer 
//     // cout<<x+1;
//     int x=0;
//     for(int i=0;i<s.length();i++){
//         x*=10;
//         x+=(s[i]-48); //s[i] is a char 
//     }
//     cout<<x;
//     return 0;
// }