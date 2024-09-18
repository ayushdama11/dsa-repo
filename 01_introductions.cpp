//HELLO WORLD PRINTING :- 
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello World \n";
    cout<<"GeeksforGeeks";
    return 0;
}
*/

//VARIABLES IN C++ :-
/*
#include <iostream>
using namespace std;
int main()
{
	int x=5;
	cout<<x<<" ";
	x=8; //we can update the values 
	cout<<x<<" "; //in this quoted commas we have given space so that between two outputs there has to be space 
	int y=10;
	cout<<y;
	return 0;
}
*/

//DATATYPES IN C++:-
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int age=39;
	string name="Ayush";
	char gender='M';
	bool isMarried=true;
	float weight=39.99;
	cout<<name<<"\n"<<age<<"\n"<<gender<<"\n"<<isMarried<<"\n"<<weight;
	return 0;
}
*/

/*
//sizeof() OPERATOR:-
#include<iostream>
using namespace std;
int main()
{
	cout<<sizeof(int)<<"\n";
	cout<<sizeof(char)<<"\n";
	cout<<sizeof(double)<<"\n";
	cout<<sizeof(float);
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int x;
	double d;
	cout<<sizeof(x)<<"\n";
	cout<<sizeof(d)<<"\n";
	cout<<sizeof(10ll)<<"\n";
	cout<<sizeof(10.5)<<"\n";
	return 0;	
}
*/

//GLOBAL VARIABLES AND SCOPE:-
//LOCAL VARIABLE
/*
#include<iostream>
using namespace std;
int main()
{
	int x=10
	cout<<x;
	return 0;
}
*/

//GLOBAL VARIABLE
/*
#include<iostream>
using namespace std;
int x=10;
int main()
{
	cout<<x;
	return 0;
}
*/

//EXTERN :-
/*
#include<iostream>
using namespace std;
extern int x;
int main()
{
	cout<<x;
	return 0;
}
int x=10;
*/

//NOTE :- block in which value of x is specified and cout is written will be the output 
/*
#include<iostream>
using namespace std;
int x=20;
int main()
{
	int x=10;
	{
		int x=30;
		cout<<x;
	}
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
int x=20;
int main()
{
	int x=10;
	{
		int x=40;
	}
	cout<<x;
	return 0;
}*/

//STATIC VARIABLES:-
//Static variable gets default value as 0
/*#include<iostream>
using namespace std;
int main()
{
	static int x;
	cout<<x;
	return 0;
}
*/

//const in c++:-
//we cannot change or update const variable 
/*
#include<iostream>
using namespace std;
const double PI =3.14;
int main()
{
	int r;
	cout<<"enter radius \n";
	cin>>r;
	cout<<"Area is "<<(PI*r*r);
	return 0;
}
*/

//auto keyword in c++
/*
#include <iostream>
#include <typeinfo> //used when typeid is used 
using namespace std;
int main()
{
	auto a=10;
	auto b=15.5;
	cout<<a<<"\n"<<b;
	cout<<typeid(a).name()<<"\n"
		<<typeid(b).name();
	return 0;
}
*/

/*
//LITERALS IN C++:-
//INT:- PREFIXES:-
#include <iostream>
using namespace std;
int main()
{
	int a=20;
	int b=0x4E;
	int c=036;
	int d=0b11;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;
	return 0;
}
*/

//INT:-SUFFIXES:-
/*
#include <iostream>
using namespace std;
int main()
{
	int a=124;
	unsigned int b =124u;
	long int =124L;
	long long int=124ll;
	return 0;
}
*/

//FLOATING POINT LITERALS:-
/*
#include<iostream>
using namespace std;
int main()
{
	float a =10.5f;
	double b=10.515;
	float c=2.1e15f;
	double d=200.1e-80;
//	double f=Ox1A.1p2;
	return 0;
}
*/

//Type conversion:-
//Implicit:- Implicit conversion done automatically by compiler 
/*
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	char y='A';
	cout<<(x+y)<<endl; //here char variable will convert into int variable becauz int has more priority.
	float z=5.5;
	cout<<(x+z); //now int variable will convert into float cauz it has more priority.
	return 0;
}
*/

//Explicit:-C++ style conversion :- [static_cast<name_of_datatype>]
/*
#include<iostream>
using namespace std;
int main()
{
	int x=15,y=2;
	double z=static_cast<double>(x)/y; //here we are using static_cast to change datatype of our variable.
	cout<<z;
	return 0;
}*/

//setprecision and setw

#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	// float a=122.2345678910;
	// int b=234;
	// // fixed<<setprecision(2) ka matlab decimal ke bad ke 2 number hi print hoge starting se ṇ
	// cout<<fixed<<setprecision(2)<<a<<endl;
	// cout<<setw(5)<<b<<endl;
	cout<<"Ayush Dama";
	return 0;
}

