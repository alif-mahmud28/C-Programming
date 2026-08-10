/*

💻 আজকের Practice Problems (৩টা)

Problem 1: Constructor দিয়ে Student Class পুনর্লিখন
গতকালের Student class-টা নাও, এখন একটা parameterized constructor যোগ করো (name, roll, marks নিয়ে)। main()-এ constructor ব্যবহার করে ৩টা object বানাও (আগের মতো আলাদা আলাদা লাইনে s1.name = ... না লিখে, সরাসরি constructor-এ পাঠিয়ে)।

Problem 2: Constructor Overloading

একটা Rectangle class বানাও যেখানে:
Default constructor: length ও width দুটোই 1 সেট করবে (যদি ইউজার কিছু না দেয়)
Parameterized constructor: length, width নিয়ে সেট করবে
main()-এ দুই ধরনের object বানাও (একটা default দিয়ে, একটা parameter দিয়ে), দুটোরই area প্রিন্ট করো।

Problem 3: Constructor + Destructor একসাথে

একটা Car class বানাও:
Attributes: brand (string), speed (int)
Constructor: object তৈরি হওয়ার সময় brand আর speed সেট করবে, আর প্রিন্ট করবে "[brand] car created"
Destructor: প্রিন্ট করবে "[brand] car destroyed"

main()-এ ২টা Car object বানাও, দেখো constructor আর destructor কোন ক্রমে call হয়।



*/
//Problem 1;
#include <iostream>
using namespace std;

//Problem 1;
class Student {
public:
    string name;
    int roll;
    float marks;

    //  constructor
    Student(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Roll: " << roll << ", Marks: " << marks << endl;
    }
};

//Problem 2:
class Rectangle{
public:
    float length,width;

    Rectangle(){
        length=1;
        width=1;


    }
    Rectangle(float length,float width){
    this->length=length;
    this->width=width;

    }
    void displayArea(){
    cout<<"Area is:"<<length*width<<endl;
    }


};

//Problem 3:
class Car{
public:
    string brand;
    int speed;

    Car(string brand,int speed){
        this->brand=brand;
        this->speed=speed;
        cout<<brand<<" car created"<<endl;
    }
    ~Car(){

        cout<<brand<<" car destroyed"<<endl;
    }
    void displaySpeed(){

    cout<<brand<<" its speed:"<<speed<<endl;
    }



};



int main() {
    //Probmem 1:
    Student s1("Alif",21,89.5);
    Student s2("Ope",29,90.6);
    Student s3("Mahmud",55,78.9);
    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();


    //Problem 2:
    Rectangle r1;
    r1.displayArea();


    Rectangle r2(10,8);
    r2.displayArea();

    //Problem 3:

    Car c1("Toyota",56);

    Car c2("Marcedes",89);
    c1.displaySpeed();
    c2.displaySpeed();


}





























