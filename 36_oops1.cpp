// #include <iostream>
// using namespace std;

// class Player {      // class
// public:
    // data members :-
// private:
//     int score;
//     string name;
//     int health;

// public:
//     void setScore(int s) {
//         score = s;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     int getScore() {
//         return score;
//     }

//     int getHealth() {
//         return health;
//     }


    // Member functions
//     void showHealth() {
//         cout<<"Health is : "<<health<<endl;
//     }

//     void showScore() {
//         cout<<"Score : "<<score;
//     }
// };

// class Calculator {
// public:
//     int a;
//     int b;

//     void add() {
//         cout<<a+b<<endl;
//     }

//     void subtract() {
//         cout<<a-b;
//     }
// };

// int main() {
//     Player player[10];
//     Player amit;    // object

    // amit.score = 90;
    // amit.health = 100;
    // cout<<amit.score<<endl; // 90
    // cout<<amit.health<<endl;    // 100

//     amit.showHealth();

//     amit.setScore(10);
//     amit.setHealth(100);
//     cout << amit.getHealth()<<endl;
//     cout << amit.getScore()<<endl;

    // Player harsh;
    // harsh.score = 100;
    // harsh.health = 20;
    // cout<<harsh.score<<endl; // 100
    // cout<<harsh.health<<endl;    // 20 

    
    // player[0] = amit;
    // player[1] = harsh;

//     Calculator calci;
//     calci.a = 10;
//     calci.b = 7;
//     calci.add();
//     calci.subtract();
// }  


// ** Create a class 'book' with name, price and number of pages as its attributes. the class should contain foll. member functions :-
// countBooks(int price) - returns total books with price less than given price
// isBookPresent(string title) - returns boolean value

#include <iostream>
using namespace std;

class Book {
    public:
    char name;
    int price;
    int noOfPages;

    int countBooks(int p) {
        if (price < p) 
            return 1;
        else
            return 0;
    }

    bool isBookPresent(char book) {
        if(name == book) return true;
        else return false;
    }
};

int main() {
    Book harryPotter;
    harryPotter.name = 'H';
    harryPotter.price = 1000;
    harryPotter.noOfPages = 500;

    cout<<harryPotter.countBooks(2000);
    cout<<harryPotter.isBookPresent('H');
    return 0;
}