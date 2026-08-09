/*
💻 আজকের Practice Problems (৩টা)
Problem 1: Student Class
একটা Student class বানাও যাতে থাকবে:
Attributes: name (string), roll (int), marks (float)
একটা method displayInfo() যেটা সব তথ্য প্রিন্ট করবে
একটা method showGrade() যেটা marks অনুযায়ী গ্রেড বলবে (৮০+ হলে "A+", ৬০-৭৯ হলে "A", তার নিচে হলে "Need Improvement")
main()-এ ৩টা আলাদা Student object বানাও, প্রতিটাতে ভিন্ন ভিন্ন ভ্যালু বসাও, আর প্রতিটার displayInfo() ও showGrade() call করো।


Problem 2: Rectangle Class
একটা Rectangle class বানাও:
Attributes: length, width (float)
Methods: calculateArea() (রিটার্ন করবে area), calculatePerimeter() (রিটার্ন করবে perimeter)
main()-এ একটা Rectangle object বানিয়ে length আর width সেট করো, তারপর দুইটা method call করে ফলাফল print করো।


Problem 3: Book Class (একটু চিন্তা করে করার মতো)
একটা Book class বানাও:
Attributes: title, author (string), price (float), isAvailable (bool)
একটা method displayBook() যেটা সব তথ্য দেখাবে (আর isAvailable অনুযায়ী "Available" বা "Not Available" লিখবে, boolean সরাসরি না দেখিয়ে)
main()-এ ২টা Book object বানাও, একটা available, একটা না।
*/
#include <iostream>
using namespace std;
//Problem 1
class Student{
public:
    string name;
    int roll;
    float marks;

    void displayInfo(){
    cout<<"Name:"<<name<<endl;
     cout<<"Roll:"<<roll<<endl;
      cout<<"Marks:"<<marks<<endl;
    }

    void showGrade(){
    if(marks>=80){
        cout<<"A+"<<endl;

    }
    else if(marks>=60 && marks<=79){

        cout<<"A"<<endl;
    }
    else{
        cout<<name<<" need improvement"<<endl;
    }

    }

};
//Problem 2
class Rectangle{
public:
    float length,width;

    float calculateArea(){
        return length*width;

    }
    float calculatePerimeter(){

        return 2*(length+width);
    }

};

//Problem 3:
class Book{
public:
    string title,author;
    float price;
    bool isAvailabel;

    void displayBook(){
    cout<<"Title :"<<title<<endl;
    cout<<"Author:"<<author<<endl;
    cout<<"Price:"<<price<<" taka"<<endl;
    if(isAvailabel){
        cout<<"Book is available in the store;"<<endl;
    }
    else{
        cout<<"Not available.";
    }

    }
};


int main(){
    //Problem 1 objects:
    Student s1,s2,s3;
    s1.name="Abir Mahmud";
    s1.roll=21;
    s1.marks=89;
    s2.name="Alif mahmud";
    s2.roll=28;
    s2.marks=65;
    s3.name="Minara begum";
    s3.roll=1;
    s3.marks=99.9;
    s1.displayInfo();
    s1.showGrade();
    s2.displayInfo();
    s2.showGrade();
    s3.displayInfo();
    s3.showGrade();
    cout<<endl;
    cout<<endl;

    //Problem 2 objects:
    Rectangle r1;
    r1.length=7.5;
    r1.width=5.5;
    cout<<"Area is:"<<r1.calculateArea()<<endl;
    cout<<"Perimeter:"<<r1.calculatePerimeter()<<endl;

    //Problem 3 objects:
    Book b1;
    b1.title="Alif er bertho prem";
    b1.author="Alif";
    b1.price=1789;
    b1.isAvailabel=true;
    b1.displayBook();
}
