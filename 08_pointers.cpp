//pointers are used to store address of another variable. 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=4;
//     int* p=&x; //means p is pointer storing address of x
//     cout<<&x<<endl;
//     cout<<p; //both will give same output i.e address of x
//     return 0;
// }

//for float pointer variable must be of float datatype ; same for char 

//DEREFRENCE OPERATOR = star(*) operator :-

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     int *p=&x;
//     x=90; //updating value of x does not means that we are changing the address , address will be same just the value will be updated
//     cout<<*p; //iska matlab pehle p pey jaao fir jis address ko p point kar raa hai waha jaao aur jo value hai wo address pe usey print karo
//     return 0; // o/p=90
// }

//UPDATING VARIABLE VALUE WITH POINTER :-

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=122; 
//     int *p=&x; 
//     cout<<x<<endl; 
//     *p=6; //we can also update the variable by using pointer 
//     cout<<x; 
//     return 0; 
// }


//SUM OF TWO NUMBERS :-
#include<iostream>
using namespace std;
int main()
{
    // int x=6;
    // int y=7;
    // int* p1=&x;
    // int* p2=&y;
    // cout<<*p1 + *p2;

//TAKING POINTER INPUT FROM USER :-
    // int x,y;
    // int* p1=&x;
    // int* p2=&y;
    // cout<<"enter first number: ";
    // cin>>*p1;
    // cout<<"enter second number: ";
    // cin>>*p2;
    // cout<<*p1 + *p2; //prints sum of numbers 
    // cout<<x+y; //prints sum of numbers

    int x;
    int* p=&x;
    cin>>*p;
    cout<<x; //prints the value inputted bu user.

    return 0;
} 

//we cannot write in form int* p1,p2 , cauz in this p1 is pointer but p2 is int.

//PASS BY REFRENCE :- is done using defrence operator i.e using pointers
//METHOD-1:-
/*
#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x; //means temp is pointing towards the value whose address is there in pointer x.
    *x=*y; //updation 
    *y=temp;
    return;
}
int main()
{
    int a,b;
    cin>>a>>b;
    // int* x=&a;
    // int* y=&b;
    // swap(x,y);
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}*/

//METHOD-2 :-
/*
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a; 
    a=b; 
    b=temp;
    return;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}*/

//POINTER ARITHMETIC :-
/*
#include<iostream>
using namespace std;
int main()
{
    // bool flag =true;
    // bool* ptr =&flag;
    // cout<<ptr<<endl; //0x61ff0b
    // ptr++;
    // cout<<ptr<<endl; //0x61ff0c

    int x=4;
    int* ptr=&x;
    cout<<*ptr<<endl; //4
    // (*ptr)++; //incrementing the value which the pointer is pointing 
    *ptr=*ptr+1;
    cout<<*ptr<<endl; //5
    return 0;
}*/

//WRITE A FUNCTION TO FIND OUT FIRST AND LAST DIGIT OF A NUMBER WITHOUT RETURNING ANYTHING 
/*
#include<iostream>
using namespace std;
void find(int n,int* ptr1,int* ptr2){
    *ptr2=n%10; //lastDigit

    while(n>9){
        n/=10;
    }
    *ptr1=n; //firstdigit 
    return;
}
int main()
{
    int n;
    cin>>n;
    int firstDigit, lastDigit;
    int* ptr1=&firstDigit;
    int* ptr2=&lastDigit;
    find(n,ptr1,ptr2);
    cout<<firstDigit<<" "<<lastDigit;
    return 0;
}
*/

//NULL POINTER :- int* ptr=NULL; we can use null pointer to just nullify any variable 
/*
#include<iostream>
using namespace std;
int main()
{
    int* ptr1= NULL; //reserved address 
    int* ptr2= 0;
    int* ptr3= '\0';
    cout<<ptr1; //op= 0x0 => fixed thing 
    cout<<ptr2;
    cout<<ptr3;
    return 0;
    //null character :- \0 => instead of writing NULL if we also print \0 then too output will be 0x0 . has ascii value =0 thatswhyy
}*/

//DOUBLE POINTERS :- used to store address of a pointer => int** ptr
/*
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int* ptr= &x;
    int** p= &ptr; //stores address of the pointer 'ptr'
    cout<<x<<endl; //5
    cout<<*ptr<<endl; //5
    cout<<p<<endl; //0x61ff04 => address of *ptr
    cout<<**p<<endl; //5
    cout<<*p; //address of x
    return 0;
}*/

//product of two numbers using pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cin>>x>>y;
//     int* ptr1=&x;
//     int* ptr2=&y;
//     int ans;
//     int* ptrAns=&ans;
//     *ptrAns=(*ptr1)*(*ptr2);
//     cout<<*ptrAns<<endl;
//     cout<<ans;
//     return 0;
// }




























































