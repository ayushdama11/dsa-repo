//WHILE LOOP:-
//Print the sum of first n natural numbers, where n is the input:-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=1; //loop variable
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
}
*/

//For LOOP:-
//Print the sum of first n natural numbers, where n is the input:-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}*/

//print first multiple of 5 which is also a multiple of 7:-
/*
#include<iostream>
using namespace std;
int main()
{
/*
    int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }
    return 0;
}
*/
/*
    for(int i=5;;i+=5){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
    }
*/

//DO-WHILE LOOP:-
//print the sum of stream of n integers in input using do while loop :-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int i=1;
    cin>>n;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    cout<<"the sum of first "<<n<<"integer is "<<sum<<endl;
    return 0;
}
*/

//continue keyword:-
//print all the values between 1 and 50 except the multiples of 3
/*
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
}
*/

//DISPLAY THIS AP:- 1,3,5,7,9,... UPTO N TERMS:-
//a(n)=a+(n-1)d=1+(n-1)2=1+2n-2=2n-1
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        cout<<i<<endl;
    }
    return 0;
}*/

