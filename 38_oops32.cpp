// ** Inheritance 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Parent class , Base class
class Vehicle {
    public:
        int tyreSize;
        int engineSize;
        int lights;
        string companyName;

        void showCompanyName() {
            cout<<companyName<<endl;
        }

        Vehicle() {
            cout<<"Vehicle ka constructor call hua\n";
        }
};

// Car inherits vehicle - Car is child of vehicle 
class Car : public Vehicle {
    public:
        int steeringSize;
};

// Derived class, child class
class Bike : public Vehicle {
    public:
        int handleSize;
        Bike() {
            cout<<"bike ka constructor call hua hai \n";
        }
};

// Access Specifiers - public private protected
class A {
    private:    // private cannot be accesed and cannot be inherited
        int a_ka_private;
    protected:      // cannot be accesed but can be inherited
        int a_ka_protected;
    public:     // 
        int a_ka_public;

        A() {
            cout<< "A ka constructor call hua!\n "<<endl;
        }
};

// A se jo bhi hamare data members aae hai wo a ke liey public ho jaege 
class B : virtual public A {
    public:
        int b_ka_public;
        B() {
            cout<<"B ka constructor call hua!\n";
        }
};

// Multilevel Inheritance
// class C : public B {
//     public:
//         int c_ka_public; 
// };

// Multiple Inheritance - inheriting from more than one parent class
// class C : public B, public A {
//     public:
//         int c_ka_public; 
// };

class C : virtual public A {
    public:
        int c_ka_public; 
        C() {
            cout<<"C ka constructore call hua!\n";
        }
};

// ** Diamond problem
class D : public B , public C {
    public: 
        int d_ka_public;
        void show() {
            // cout<<a_ka_public<<endl;    // will give error
            // cout<<C::a_ka_public<<endl;
            cout<<a_ka_public<<endl;
        }
};

int main() {
    // B b;
    // b.b_ka_public = 10;
    // b.a_ka_public = 5;
    
    D d;
    d.a_ka_public = 10;
    d.show();
 
    // Bike honda;
    // honda.handleSize = 5;
    // honda.tyreSize = 10;
    // honda.engineSize = 500;
    // cout<<honda.tyreSize<<endl; // 10

    return 0;
} 