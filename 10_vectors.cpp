//to use vector operations we use " #include<vector> " header file.
//The size of a vector represents the number of components in the vector. The capacity of a vector represents the maximum number of elements the vector can hold.

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     cout<<"Size:- "<<v.size()<<endl;
//     cout<<"Capacity:- "<<v.capacity()<<endl;

//     //pushback:- to add element in the vector
//     v.push_back(1);
//     cout<<"Size:- "<<v.size()<<endl;
//     cout<<"Capacity:- "<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"Size:- "<<v.size()<<endl;
//     cout<<"Capacity:- "<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"Size:- "<<v.size()<<endl;
//     cout<<"Capacity:- "<<v.capacity()<<endl;

//     v.resize(5);
//     cout<<"Size:- "<<v.size()<<endl;
//     cout<<"Capacity:- "<<v.capacity()<<endl;
    
//     v.resize(10);
//     cout<<"Size:- "<<v.size()<<endl;
//     cout<<"Capacity:- "<<v.capacity()<<endl;

//     v.pop_back(); //to remove last element of vector
//     v.pop_back();
//     cout<<"Size:- "<<v.size()<<endl;
//     cout<<"Capacity:- "<<v.capacity()<<endl;
//     return 0;
// }


//LOOPING IN VECTORS:-

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v;
//     //FOR-LOOP:-
//     for(int i=0;i<5;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     v.insert(v.begin()+2,6); //inserts 6 at 2nd index 

//     //FOR-EACH LOOP:-
//     for(int ele:v){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
    
//     v.erase(v.end()-2);
    
//     //WHILE LOOP:-
//     int idx=0;
//     while(idx<v.size()){
//         cout<<v[idx++]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

//FIND THE LAST OCCURENCE OF AN ELEMENT X IN A GIVEN VECTORS:-

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v(6);
//     for(int i=0;i<6;i++){
//         cin>>v[i];   //this will only work when you initialize size to your vector
//     }
//     int x;
//     cout<<"enter nummber you want to find last occurences for : ";
//     cin>>x;
//     int occurence=-1;
    
//     first occurence
//     for(int i=0;i<v.size();i++){
//         if(v[i]==x){
//             occurence=i;
//         }
//     }
//     cout<<occurence<<endl;

//     last occurence 
//      for(int i=v.size()-1;i>=0;i--){
//         if(v[i]==x){
//             occurence=i;
//             break;
//         }
//     }
//     cout<<occurence<<endl;

//     return 0;
// } 


//COUNT THE NUMBER OF OCCURENCE OF A PARTICULAR ELEMENT X:-
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    int occurence=0;
    
    for(int ele:v){
        if(ele==x){
            occurence++;
        }
    }
    cout<<occurence<<endl;
    return 0;
}
*/

//COUNT THE NUMBER OF ELEMENTS STRICTLY GREATER THAN VALUE X :-
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    return 0;
}*/

//SORTED ARRAY :- ARRAY IS IN SORTED ARRAY IF IT IS ARRANGED IN "ASCENDING ORDER" OR "DESCENDING ORDER" . 
//a[i]>a[i-1] => ASCENDING ORDER
//CHECK IF THE ARRAY IS SORTED OR NOT :-
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,6};
    bool sortedflag=true;
    for(int i=1;i<6;i++){
        if(array[i]<=array[i-1]){
            sortedflag=false;
        }
    }
    cout<<sortedflag<<endl;
    return 0;
}*/

//FIND THE DIFFRENCE BETWEEN THE SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES :-
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int array[]={1,2,1,2,1,2};
    int anssum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            anssum+=array[i];
        }
        else{
            anssum-=array[i];
        }
    }
    cout<<anssum<<endl;
    return 0;
}
*/

//NOTE :- Vectors are "Passed by Value" to the functions each time they are passed
/*
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){  //a -> 9,10,6,1
    a[0]=100; // a -> 100 10 6 1
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/

// Find the doublet in the Array whose sum is equal to the given value x and return there indices
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"enter target :- ";
//     cin>>x;
//     vector<int>v;
//     int n;
//     cout<<"enter array size:- ";
//     cin>>n;
//     cout<<"enter array elements :- ";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }

//     for(int i=0;i<=v.size()-2;i++){
//         for(int j=i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
//     return 0;
// }

//WAP to copy contents of one array into another in a reverse order :-
/*
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> a){
    for(int i=0;i<=a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    display(v1);

    vector<int>v2(v1.size());
    for(int i=0;i<v2.size();i++){
        //i+j=size-1
        int j=v1.size()-1-i;
        v2[i] =v1[j];
    }
    display(v2);
    return 0;
}*/

//WAP to Reverse the Array without any extra array :-
/*
#include<iostream>
#include<vector>
using namespace std;
void display (vector<int> a){
    for(int i=0;i<=a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    display(v);

    //reverse =

    //using WHILE loop 
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     //swap v[i] and v[j]
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    // display(v);

    //using FOR loop
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    display(v);
    return 0;
}*/


//Rotate the given array 'a' by k steps; where k is non-negative where k can be greater than size of array 'a'.
//1 6 2 3 7 4
//after rotating 2 steps :- 7 4 1 6 2 3
//first reverse the part of array which is not to be rotated and then rotate that part of array which is to be rotated
/*
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> a) { //here we have not used & operator it is because we are making copy of vector v  
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversePart(int i,int j, vector<int>& v){  //here we are using & operator because we have to make changes in vector v so we are passing whole vector v here 
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    display(v);

    int k=2; //no. of times to rotate the vector
    //rotating array
    int n=v.size(); //size of vector 'v'
    // cout<<n; //6
    if(k>n) k=k%n; //remainder comes after modulus -> times we have to rotate the vector

    reversePart(0,n-k-1,v); //sabse pehle jin elements ko rotate karna hai unko chodke jitne bhi elements hai unko reverse kar dena hai
    display(v);

    reversePart(n-k,n-1,v); // jin elements ko rotate karn hai usey bhi reverse karr doo
    display(v);

    reversePart(0,n-1,v); //fir pura vector revrse kar doo
    display(v);
    return 0;
}*/

