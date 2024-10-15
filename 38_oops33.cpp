// ** Function Overriding

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

        // agar isko virtual dala hai to second wala bhi automatically virtual ban jaega hame usme alag se likhne ki jarurta nai hai
        virtual void show() {
            cout<<"Vehicle ka show"<<endl;
        }

        // ** Abstract Class - jo bhi functions hai wo sabhi inherited class me hone chahie 
        // Pure virtual functions 
        virtual void calculateMileage() = 0;
        virtual void refuel() = 0;
};

// Derived class, child class
class Bike : public Vehicle {
    public:
        int handleSize;
        void show() {
            cout<<"Bike ka show"<<endl;
        }
        void calculateMileage() {
            cout<<"mileage of bike"<<endl;
        }
        void refuel(){
            cout<<"bike refuel"<<endl;
        }
};

class C : public Bike {
    public : 
        void show() {
            cout<<"C ka show"<<endl;
        }
        void calculateMileage() {
            cout<<"mileage of c"<<endl;
        }
        void refuel(){
            cout<<"c refuel"<<endl;
        }
};

int main() {
    // Bike b;
    // b.show(); 

    // ** for using the show function of class A
    // ** M1 - using scope resolution operator
    // b.Vehicle::show();

    // ** M2 - using pointers
    // compiler pov - vehicle type ka hai
    // runtime pov -  bike ka address hai to bike ka call hona chahie
    // Bike b;
    // Vehicle *a;
    // a = &b;
    // a -> handleSize = 10;   // error
    // a -> show();    // Vehicle ka show

    
    // Vehicle *a;
    // a = new Bike;
    // a -> show();    // Bike ka show 

    // a = new Vehicle;
    // a -> show();    // Vehicle ka show

    // Bike *b;
    // b = new C;
    // b -> show();    // C ka show


    // Runtime Binding 
    // Vehicle a;
    // Bike b;
    // cout<<sizeof(a)<<endl;  // 40
    // cout<<sizeof(b)<<endl;  // 44

    return 0;
}  