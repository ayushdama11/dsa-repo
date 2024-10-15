// ** Operator Overloading

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ComplexNumber {
    public: 
        int imaginary;
        int real;

        ComplexNumber add(ComplexNumber &c1) {
            ComplexNumber c3;
            c3.imaginary = c1.imaginary + this->imaginary;
            c3.real = c1.real + this->real;
            return c3;
        }

        ComplexNumber operator + (ComplexNumber &c1) {
            ComplexNumber c3;
            c3.imaginary = c1.imaginary + this->imaginary;
            c3.real = c1.real + this->real;
            return c3;
        }
};

// friend function
class A {
    int a_private = 10;
    public:
        friend void show(A &a);
        // void show2() {
        //     cout<<a_private<<endl;  // 10
        // };
};

void show(A &a) {
    cout<<a.a_private<<endl;
}

int main() {
    A a;
    show(a);
    // a.show2();

    // ComplexNumber a1, a2;
    // a1.imaginary = 10;
    // a1.real = 5;
    // a2.imaginary = 2;
    // a2.real = 3;

    // ComplexNumber a3 = a1.add(a2);
    // cout<<"real: "<<a3.real<<" "<<"imaginary: "<<a3.imaginary<<endl;

    // a3 = a1+a2;
    // cout<<"real: "<<a3.real<<" "<<"imaginary: "<<a3.imaginary<<endl;

    return 0;
}  