//input a string and return the number of times the neighbouring characters are diffrent from each other 
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    int n=str.length();

    for(int i=0;i<n;i++){
        if(n==1){
            break;
        }
        else if(n==2 && str[0]!=str[1]){
            count=1;
            break; //because if there are only 2 numbers in the string than there is no need of running more loop
        }
        else if(i==0){
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==n-1){
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1])
                count++;
    }
    cout<<count;

}*/

//Sorting a string using in-built functions
//name -> aemn => lexographically sort karnaa => ascii code ke basis pe
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s); //agar spaces hogi to pehle spaces aaegi fir alphabetically print ho jaega
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}*/

//Given two strings s and t, return true if t is an anagram of s, and false otherwise.
//s=physicswallah,t=wallahphysics -> o/p = true -> basically characters ko rearrange karke dusra ban jae koi bhi way me to anagram hote h
// *leetcode 242- valid anagram*
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="physicswallah";
    string t="phywallahsics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
}*/

//Given a string consisiting of lowercase English alphabets. Print the character that is occuring most number of times
/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // string s="physicswallah";
    //method-1
    
    // int max=0;
    // for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     int count=1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(max<count) max=count;
    // }
    
    // for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     int count=1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(count==max){
    //         cout<<ch<<" "<<max<<endl;
    //     }
    // }
    

    //method-2 
    string s="leetcode";
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i]; //s string k jo b characters hai wo nikal lo pehle
        int ascii=(int)ch; //ascii value of that character 
        arr[ascii-97]++;
    }
    
    int mx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx=arr[i];
    }
                                                                                                                                                     
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
}*/

//Stringstream class
/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream> //for using string-stream class
using namespace std;
int main(){
    string str="raghav is   a maths teacher "; //alag alag line me word wise print karana hai
    stringstream ss(str); //ss stringstream ka naam hai
    string temp; //store karne k liey har ek word koo

    while(ss>>temp){ //temp me input lelo
        cout<<temp<<endl;
    }

}*/

//Given a sentence 'str', return the word that is occuring most number of times in that sentence
/*
#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<string>
using namespace std;
int main(){

    //har ek word jo string me hoga use ham vector jo banaege usme pushback karte jaege 
    string str="raghav is a maths teacher. He is a DSA mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v; //vector of string v - contains every word of the string

    while(ss>>temp){ //jo bhi str me hai use temp me word by word laney k lie 
        // cout<<temp<<endl;
        v.push_back(temp);
    }

    sort(v.begin(),v.end()); //sort karne ke bad print karaege to fir jo 'same same word' hoge jaise yaha 'is' or 'a' hai to wo sathme ho jaege
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    //aur abhi kyuki sort karne ke bad same element saath hogae, to ham abhi agar jo element pe hamara iterator hoga uske agae wala agar element same hoga to ham count++ kar dege aur uss word ko print kara degee
    int maxCount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxCount=max(maxCount,count);   //jo bhi maxcount or count me bada hoga wo maxcount me store kardo
    }
    cout<<endl;
    
    //abhi wo word nikalna hai
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }

}

//stoi(string to integer convert kardo) vs stoll(string to long long kardo) built in functions
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="123456";
    int x = stoi(str);
    cout<<x+1<<endl;

    int a=1234567;
    string s=to_string(a);

    string y="1234567891234";
    long long f=stoll(y);
    cout<<f;
}*/

//Given n strings consisting of digits from 0 to 9.return the index of string which has maximum value. (take 0 based indexing)
//eg 0123, 0023, 456, 00182, 940, 2901 - output=5
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]= {"0123","0023","456","00182","940","002901"};
    int max=stoi(arr[0]);
    string maxS = arr[0];
    for(int i=1; i<=5; i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
        }
    }
    cout<<max<<" "<<maxS;
}*/


//Input n strings and wap to find the longest common prefix string of all strings - *leetcode 14*
/*
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    } //flight flow flower

    //abhi hame sirf first ele jo flight hai aur last ele jo flower hai unke prefixes dekhne hai
    //done in lc
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(strs.size()==1) return strs[0];
        sort(strs.begin(),strs.end()); //sort kardo
        string first= strs[0]; //jo purey string ka first word ya ele 
        string last=strs[n-1];  //last ele ya word
        string s="";
        for(int i=0;i<(min(first.size(),last.size()));i++){
            if(first[i]==last[i]){ //means har ele agr same ho tohh 
                s += first[i];
            }
            else return s;
        }
        return s;
    }
}*/

//Given two strings s and t , determine if they are isomorphic - *lc205*
/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int>v(150,1000); //aise hi normall

        for(int i=0;i<s.length();i++){
            int idx = (int)s[i]; //idx is having asccii value of the string's characters
            if(v[idx]==1000) v[idx] = s[i] - t[i];
            else if (v[idx]!=(s[i]-t[i])) return false;
        }

        //emptying the vector
        for(int i=0;i<150;i++){
            v[i]=1000;
        }

  *      //checking t ke perspective se
        for(int i=0;i<s.length();i++){
            int idx = (int)t[i];
            if(v[idx]==1000) v[idx] = t[i] - s[i];
            else if (v[idx]!=(t[i]-s[i])) return false;
        }

        return true;
    }
};
*/

//Week-2 Assignment
//Input a string and concatenate with its reverse string and print it.
/*
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    string rev= str;
    reverse(rev.begin(),rev.end());

    str+=rev;
    cout<<str;
}*/

//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.  
/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    
    char max1='!' , max2='!'; //max1 maximum and max2 second max

    for(int i=0;i<str.size();i++){
        if(max1<str[i]){
            max2=max1;                                                          
            max1=str[i];
        }
        else if(max2 < str[i] and max1 != str[i]) max2= str[i]; //agar element max se chota ho par max2 se bada ho islie jaise 687435 isme max1=8 aur max2=7 hoga
    }

    if(max2=='!')cout<<"no 2nd largest number.";
    else cout<<max2<<endl;

}
*/

