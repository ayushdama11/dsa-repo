// ** Passing class objects to functions

// #include <iostream>
// using namespace std;

// class Gun {
// public:
//     int ammo;
//     int damage;
//     int scope;
// };

// class Player {
// private:
//     class Helmet {
//         int hp;
//         int level;

//     public:
//         int setHp (int hp) {
//             this -> hp = hp;
//             return hp;
//         }
//         void setLevel (int level) {
//             this -> level = level;
//         }
//         int getHp() {
//             return hp;
//         }
//         int getLevel () {
//             return level;
//         }
//     };

//     int health;
//     int age;
//     int score;
//     bool alive;
    
//     // Nested Class
//     Gun gun;
//     Helmet helmet;

    

// public:
//     // getters
//     int getHealth() {
//         return health;
//     }
//     int getAge() {
//         return age;
//     }
//     int getScore() {
//         return score;
//     }
//     int isAlive() {
//         return alive;
//     }
//     Gun getGun() {
//         return gun;
//     } 

//     // setters
//     void setHealth(int health) {
//         // this keyword - this - is wali class ka
//         this -> health = health;
//     }
//     void setAge(int age) {
//         this -> age = age;
//     }
//     void setScore(int score) {
//         this -> score = score;
//     }
//     void setIsAlive(bool alive) {
//         this -> alive = alive;
//     }
//     void setGun(Gun gun) {
//         this -> gun = gun;
//     }
//     void setHelmet(int level) {
//         Helmet *helmet = new Helmet;    // dynamic
//         helmet -> setLevel(level);
//         int health = 0;

//         if(level == 1) health = 25;
//         else if(level == 2) health = 50;
//         else if(level == 3) health = 100;
//         else cout<<"error, invalid level!";

//         helmet -> setHp(health);
//         this -> helmet = *helmet;
//     }
//     Helmet getHelmet() {
//         cout<<helmet.getHp()<<endl;
//         cout<<helmet.getLevel()<<endl;
//     }
// };

// // int add(int a , int b) {
// //     return a+b;
// // }

// int addScore(Player a, Player b) {
//     return a.getScore() + b.getScore();
// }

// // Objects to functions - this class will return object
// Player getMaxScorePlayer(Player a, Player b) {
//     if(a.getScore() > b.getScore()) return a;
//     else return b;
// }

// int main() {
//     Player harsh;   // Object creation , statically
//     Player raghav;  // compile time , static allocation

//     // Dynamic Memory Allocation
//     Player *urvi = new Player;  // run time , dynamic allocation    // stores address 
//     Player urviObject = *urvi;  // this contains the value of urvi

//     // Nested class ke objects for harsh
//     Gun akm;
//     akm.ammo=100;
//     akm.damage=50;
//     akm.scope=2;

//     // object
//     harsh.setAge(21);
//     harsh.setScore(100);
//     harsh.setIsAlive(true);
//     harsh.setHealth(70);
//     harsh.setGun(akm);
//     harsh.setHelmet(2);

//     // Nested class ke objects for raghav
//     Gun awm;
//     awm.ammo=15;
//     awm.damage=150;
//     awm.scope=8;

//     // object
//     raghav.setAge(22);
//     raghav.setScore(20);
//     raghav.setIsAlive(true);
//     raghav.setHealth(100);
//     raghav.setGun(awm);
//     raghav.setHelmet(3);

//     Gun gun123 = harsh.getGun();
//     cout<<gun123.damage<<endl;  // 50
//     cout<<gun123.ammo<<endl;    // 100
//     cout<<gun123.scope<<endl;   // 2

//     harsh.getHelmet(); 
//     // 50 2

//     // *** Array of objects
//     Player players[3] = {harsh, raghav, *urvi};
//     cout<<players[0].getAge();

//     // (*urvi).setHealth(20);
//     urvi -> setHealth(20);
//     // cout<<(*urvi).getHealth()<<endl;    // 20
//     cout<<urvi -> getHealth()<<endl;    // 20

//     // pointer to object 
//     // urviObject.setScore(40);
//     // urviObject.getScore();

//     // cout<< add(10, 12);
//     // cout<< addScore(harsh, raghav); // 120
//     Player sanket = getMaxScorePlayer(harsh, raghav);
//     // ab sanket me harsh ki sabhi details add ho jaegi kyuki harsh ka score raghav se bada hai isle
//     cout<<sanket.getScore()<<endl;  // 100
//     cout<<sanket.getHealth();   // 70
// }



// ****

// ** Create a class "cricketer" that contains name of cricketer , his age , number of test matches that he has played and the average runs that he has scored in each test match. Create an array of data type "cricketer" to hold records of 20 such cricketers and then write a program to read these records .

