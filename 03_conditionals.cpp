//program to take input from user for cost price and selling price and calculate the profit and loss:-
/*
#include<iostream>
using namespace std;
int main()
{
    int sp,cp;
    cout<<"selling price= ";
    cin>>sp;
    cout<<"cost price= ";
    cin>>cp;
    if(sp>cp){
        int profit=sp-cp;
        cout<<"Your profit is:- "<<profit<<endl;
    }
    else if(cp>sp){
        int loss=cp-sp;
        cout<<"Your loss is:- "<<loss<<endl;
    }
    else{
        cout<<"No profit and No loss";
    }
}
*/

//Find the Maximum of three numbers :-
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter numbers";
    cin>>a>>b>>c;
    
    if(a>b && a>c){
        cout<<"Max is: "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"Max is: "<<b<<endl;
    }
    else{
        cout<<"Max is: "<<c<<endl;
    }
    
}
*/

// using nested-if:-
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter numbers";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"max is:- "<<a<<endl;
        }
        else{
            cout<<"max is:- "<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"max is:- "<<b<<endl;
        }
        else{
            cout<<"max is:- "<<c<<endl;
        }
        
    }
}*/

//switch case:- 
//in switch case, case value must be char or int . It can't be float or double.
//take alphabet input from user and check for vowels and consonants:-
/*
#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"enter alphabet ";
    cin>>alphabet;
    switch(alphabet){
        case 'a':
            cout<<"It is a vowel"<<endl;
            break;
        case 'e':
            cout<<"It is a vowel"<<endl;
            break;
        case 'i':
            cout<<"It is a vowel"<<endl;
            break;
        case 'o':
            cout<<"It is a vowel"<<endl;
            break;
        case 'u':
            cout<<"It is a vowel"<<endl;
            break;
        default:
            cout<<"It is a consonant";
    }
}
*/

//Design a calculator to perform basic arithmetic operation:-
/*
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter two integers;-";
    cin>>n1>>n2;
    cout<<"enter an operation(+,-,*,/,%):- ";
    char op;
    cin>>op;
    switch(op){
        case '+':
            cout<<"Sum is: "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Diffrence is: "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Multiplication is: "<<n1*n2<<endl;
            break;
        case '/':
            cout<<"Division is: "<<n1/n2<<endl;
            break;
        case '%':
            cout<<"Modulus is: "<<n1%n2<<endl;
            break;
        default:
            cout<<"Not a valid operation chosen";
    }
}
*/

//Ternary operator:-
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>33){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    marks>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl;
    return 0;
}