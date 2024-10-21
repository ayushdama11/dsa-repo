// revising oops
#include <iostream>
using namespace std;
class Student {
    public:
        string name;
        int rno;
        float marks;

        // constructor
        Student(string name, int rno, float marks) {
            this -> name = name;
            this -> rno = rno;
            this -> marks = marks;
        }
};

// M1 - to change anything in the function - by refrence 
// void change (Student &s) {
//     s.name = "Harsh";
// }

// M2 - to change anything in the function - by pointers
void changePtr (Student *s) {
    s -> name = "Harsh";
}

int main() {

    Student* s = new Student("Raghav", 76, 92.6);
    cout<<s->name<<endl;
    changePtr(s);
    cout<<s->name<<endl;

    // Student s("Ayush",76,92.6);
    // cout<<s.name<<endl;
    // Student* ptr = &s;

    // // M-1 : function to change my name - using & operator
    // change(s);
    // cout<<s.name<<endl;     // Harsh

    // // M-2 : using pointers - de-refrence operator
    // (*ptr).name = "Harsh";    // it will change the actual thing
    // cout<<s.name<<endl;     // Harsh

    // // M-3 
    // ptr->name = "Sanket";
    // cout<<s.name<<endl; // Sanket

    // changePtr(&s);
    // cout<<s.name<<endl; // Harsh

    return 0;
}