/*

Problem 1: Shape Hierarchy (Classic Polymorphism Example)
Shape নামে একটা base class বানাও, তাতে একটা virtual method calculateArea() (যেটা শুধু 0 রিটার্ন করবে বা "Shape না বলা আছে" প্রিন্ট করবে)। তারপর Circle (radius attribute) আর Rectangle (length, width attribute) — দুইটাই Shape থেকে inherit করাও, প্রতিটাতে নিজের calculateArea() override করো (সঠিক formula দিয়ে)।
main()-এ Shape* pointer ব্যবহার করে একটা Circle আর একটা Rectangle বানাও (new keyword দিয়ে, Topic 3-এর উদাহরণের মতো), দুটোরই calculateArea() call করো — verify করো প্রতিটা তার নিজের সঠিক ফলাফল দিচ্ছে কিনা।

Problem 2: Employee Hierarchy
Employee base class বানাও (name attribute, virtual method calculateSalary() যেটা একটা base salary রিটার্ন করবে ধরো 20000)। Manager : public Employee বানাও, যেখানে calculateSalary() override করে বেশি salary (ধরো 50000) রিটার্ন করবে।
main()-এ Employee* pointer দিয়ে একটা Manager object বানাও, calculateSalary() call করে দেখো সঠিক (Manager-এর) ভ্যালু আসছে কিনা।


*/



//Problem 1:
#include <iostream>
using namespace std;


class Shape{
public:
    virtual float calculateArea(){

        cout<<"Not defined";
        return 0;
    }


};

class Circle : public Shape{
public:
    float radius;

    float calculateArea(){

        return 3.1416 * radius * radius;
    }




};

class Rectangle : public Shape{
    public:
    float length,width;

    float calculateArea(){

        return length * width;

    }



};

int main(){

Shape *ptr= new Circle();
Circle *c=(Circle*)ptr;
c->radius=5;
cout<<"The radius of circle is:"<<ptr->calculateArea()<<endl;

Shape *shape2 = new Rectangle();
    Rectangle *r = (Rectangle*)shape2;
    r->length = 4;
    r->width = 6;
    cout << "Rectangle Area: " << shape2->calculateArea() << endl;
return 0;
}



//Problem 2:

#include <iostream>

using namespace std;

class Employee{
public:
    virtual int calculateSalary(){

    return 2000;

    }


};

class Manager : public Employee{
public:
    int calculateSalary(){

    return 5000;
    }
};



int main(){

Employee *salary= new Manager();

cout<<"The salary is:"<<salary->calculateSalary()<<endl;



}
