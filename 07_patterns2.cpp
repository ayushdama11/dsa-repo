//to count number of digits in a given input :-
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //610
    int digits=0; //to store digits 
    while(n>0){
        digits++; //1
        n=n/10; //61
    }
    cout<<digits;
    return 0;
}*/

//to find sum of digits in a given number n:-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;//use to get last digit of the number 
        sum+=lastdigit;
        n/=10; //to remove that digit from number 
    }
    cout<<sum;
    return 0;
}*/

//reverse the digits of an array :-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse =reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}*/

//Sum of the following series:-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            result-=i;
        }
        else{
            result+=i;
        }
    }
    cout<<result;
    return 0;
}*/

//Printing first N-factorial number :- to print factorial of all numbers upto n
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
        cout<<factorial<<endl;'l
    }
    return 0;
}
*/

//Find a raise to the power b:-
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int result=1;
    for (int i=1;i<=b;i++){
        result*=a;
    }
    cout<<result<<endl;
    return 0;
}*/



//Alphabet Diamond Pattern:-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    //loop to print UPPER TRIANGLE = 
    for(int line=1;line<=n;line++){
        //below loop is for printing spaces=
        int no_of_spaces=(n-line);
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";
        }

        //below loop is to print chars for each line=
        int no_of_chars=2*line-1;
        for(int j=0;j<no_of_chars;j++){
            char ch=(char)('A'+j);
            cout<<ch;
        }
        cout<<endl;
    }

    //loop to print LOWER TRIANGLE =
    for(int line=n+1;line<=2*n-1;line++){
        int no_of_spaces=(line-n);
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";
        }

        int no_of_chars=2*(2*n-line)-1;
        for(int j=0;j<no_of_chars;j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    return 0;
}
*/


//Conversion of Binary number to Decimal Number :-
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int lastdigit=n%10;
        ans=ans+(lastdigit*power);
        power*=2;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;
}

//Converting Decimal to BInary Number :-
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int paritydigit=n%2;
        ans+=paritydigit*power;
        power*=10;
        n/=2;
    }
    cout<<ans<<endl;
    return 0;
}*/