// ** Constructors
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bike {
    public:
        static int noOfBikes;   // this belongs to the class , you can say it is a variable of class
        int tyreSize;
        int engineSize;

        // ** default constructor
        // Bike() {
        //     cout<< "constructor call hua!\n";
        // }

        // ** parameterized constructor
        // Bike(int tyreSize, int engineSize = 200) {
        //     this -> tyreSize = tyreSize;
            // cout<< "constructor call hua!\n";
        //     this -> engineSize = engineSize;
        // }

        // ** Initialization list - just another way for writing constructor - a shortcut method for writing the constructor 
        Bike (int ts, int es) : tyreSize(ts), engineSize(es) {}
        // constructor overloading
        Bike (int ts) : tyreSize(ts), engineSize(100) {}
        Bike () : tyreSize(12), engineSize(100) {}

        // ** static functions
        static void increaseNoOfBikes() {
            noOfBikes++;
        }

        // ** destructure - called when object goes out of scope
        ~Bike() {
            cout<<"destructor call hua"<<endl;
        }
};

//** Function Overloading
void calculateArea(int l, int b) {
    cout<<l*b<<endl;
}
void calculateArea(int s) {
    cout<<s*s<<endl;
}
void calculateArea(float s) {
    cout<<3.14721*s*s<<endl;
}


// ** static members :-
void print() {
    static int b = 10;
    cout<<b<<endl;
    b++;
}

// scope resolution operator :: is used to access something which is in diffrent scope
int Bike::noOfBikes = 10;

int main() {
    cout<<"Namaste folks!"<<endl;
    Bike tvs(12, 100);   // object creation  // constructor ko call jaegyi   // hidden function
    Bike honda(13, 150);
    Bike royalEnfield(15, 350);
    Bike bajaj(13);    

    // destructor will be called again after the ending of this scope
    bool flag = true;
    if(flag==true) {
        Bike bmw(17,1000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }

    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;

    // before we wrote static - kyuki wo ek naya avariable bana de ra tha
    // print(); // 10
    // print(); // 10
    // print(); // 10

    // after we wrote *** static *** - kyuki ab wo same variable ko point kar ra hai - like call by refrence 
    print(); // 10
    print(); // 11
    print(); // 12

    royalEnfield.increaseNoOfBikes();
    cout<<royalEnfield.noOfBikes<<endl; // 10   // 11
    cout<<bajaj.noOfBikes<<endl;    // 10    // 11

    return 0;
} 