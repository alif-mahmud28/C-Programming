/*

💻 আজকের Practice Problems (৩টা)
Problem 1: Person → Teacher/Student (উপরের উদাহরণ নিজে লেখো)

Person class বানাও (name, age, address + displayPersonInfo()), তারপর Teacher (with salary) আর Student (with roll, marks) — দুইটাই Person থেকে inherit করাও। main()-এ একটা করে object বানিয়ে সব method call করো।

Problem 2: Multilevel Inheritance

Vehicle class বানাও (attribute: brand, method: showBrand()), তারপর Car : public Vehicle (attribute: numberOfDoors), তারপর SportsCar : public Car (attribute: topSpeed)। main()-এ একটা SportsCar object বানাও, দেখো এটা তিন লেভেলের সব attribute/method অ্যাক্সেস করতে পারছে কিনা।

*/



//Problem 1:
#include <iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    string address;
    void displayInfo(){
    cout<<"Name:"<<name<<", Age:"<<age<<", Address:"<<address<<endl;
    }
};
class Teacher : public Person {
public:
    float salary;
    void displaySalary(){
        cout<<"This is teacher information:"<<endl;
    displayInfo();
    cout<<"Salary:"<<salary<<endl;
    }
};
class Student :public Person{
public:
    int roll;
    float marks;
    void displayStudentInfo(){
    cout<<"This is student information:"<<endl;
        displayInfo();
    cout<<"Roll:"<<roll<<",Marks:"<<marks<<endl;
    }
};
int main(){
    Teacher t1;
    t1.name="Hannan";
    t1.age=31;
    t1.address="Dhaka";
    t1.salary=50000;
    t1.displaySalary();
    Student s1;
    s1.name="Masud";
    s1.age=18;
    s1.address="Dhaka";
    s1.roll=28;
    s1.marks=66.9;
    s1.displayStudentInfo();
}


//Problem 2:

#include <iostream>
using namespace std;
class Vehicle{
public:
    string brand;

    void showBrand(){

    cout<<"The brand is:"<<brand<<endl;

    }
};

class Car : public Vehicle{
public:
    int numberOfDoors;
    void showDoor(){
    cout<<"Doors:"<<numberOfDoors<<endl;
    }


};

class SportsCar : public Car{
public:
    float topSpeed;

    void showTopSpeed(){
    cout<<"Top speed:"<<topSpeed<<" kph"<<endl;
    }
};
int main(){


    SportsCar s1;
    s1.brand="Marcedes";
    s1.topSpeed=123;
    s1.numberOfDoors=4;
    s1.showBrand();
    s1.showDoor();
    s1.showTopSpeed();

}
