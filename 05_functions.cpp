//to add 2 nums :-
/*
#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Hello"<<endl;
    cout<<add(a,b)<<endl;
    return 0;
}*/

//standard library functions:-
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<pow(2,3)<<endl;
    cout<<sqrt(25)<<endl;
    return 0;
}*/

//Functions practise:- 
/*
#include<iostream>
using namespace std;
int addition(int x,int y){
    //proccessing
    int result=x+y;
    return result;
}
void fun(string name){
    cout<<"Are you having fun "<<name<<" ?"<<endl;
}

int main()
{
    fun("Sanket"); //for void functions just call the function no need to store it in naother variable and also not do cout otherwise it shows error.
    //int x=addition(10,5);
    //cout<<x;
    return 0;
}*/

//program to print square of first 5 natural numbers:-
/*
#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
int main()
{
    for(int i=1;i<=5;i++){
        cout<<square(i)<<endl;
    }
    return 0;
}*/

//function to print area and circumference of a circle:-
/*
#include<iostream>
using namespace std;
const double pi =3.14;
double area(int r){
    return pi*r*r;
}
double circumference(int r){
    return 2*pi*r;
}
int main()
{
    int r;
    cin>>r;
    cout<<"area= "<<area(r)<<endl<<"circumference= "<<circumference(r);
    return 0;
}
*/

//Given the age of a person , write the function to check whether the person is eligible for vote or not:-
/*
#include<iostream>
using namespace std;
bool checkEligible(int age,int limit){
    if(age>=limit){
        //the person is eligible
        return true;
    }else{
        //person is not eligible
        return false;
    }
}
int main()
{
    int voting_limit=18;
    int is_Eligible_for_voting=checkEligible(25,voting_limit);
    if(is_Eligible_for_voting){
        cout<<"Yes the current person is eligible to vote";
    }
    else{
        cout<<"No the current person is not eligible to vote";
    }

    return 0;
}
*/

//Given two numbers a and b ,write a program using functions to print all the odd numbers between them :-
/*#include<iostream>
using namespace std;
bool isOdd(int num){
    if(num%2==0){
        return false;
    }else{
        return true;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}*/

//Given two numbers a and b,write a program to print all the prime numbers present between a and b:- 
//prime numbers are number which are not divisible by any other number than 1 
/*
#include<iostream>
using namespace std;
bool isPrime(int num){
    //function checks that given number is prime or not 
    for(int i=2;i<=(num-1);i++){
        if (num%i==0) return false; //false cauz it becomes composite number 
    }
    return true;
}
bool isPrimeBtr(int num){
    for(int i=2;i*i<=num;i++){
        // i^2<=num -> i<= sqrt(num)
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    int a,b;  
    cin>>a>>b; 
    for(int i=a;i<=b;i++){  
        if(isPrimeBtr(i)){  
            cout<<i<<" "; 
        } 
    } 
} */ 

//PERMUTATIONS AND COMBINATIONS :-
/*
#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}

int combination(int n, int r){
    int ncr=fact(n)/(fact(r) * fact(n-r));
    return ncr;
}

int permuation(int n, int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr=combination(n,r);
    int npr=permuation(n,r);
    cout<<ncr<<endl;
    cout<<npr;
    return 0;
}*/

//PASCAL TRIANGLE :-
/*
#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    int ncr=fact(n)/(fact(r) * fact(n-r));
    return ncr;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j);
        }
        cout<<endl;
    }
    return 0;
}
*/