/*

Problem 1: Abstract Class দিয়ে Animal Hierarchy

Animal নামে একটা Abstract class বানাও, যেখানে একটা pure virtual function থাকবে virtual void makeSound() = 0;। তারপর Cat আর Cow — দুইটা child class বানাও, যারা এই method implement করবে (Cat বলবে "Meow", Cow বলবে "Moo")।

main()-এ:

চেষ্টা করো Animal a1; লিখতে — দেখো কী error আসে (এটা expected, নিজে চোখে দেখার জন্য)
তারপর সেই লাইনটা কমেন্ট করে দাও, আর Animal *ptr ব্যবহার করে Cat আর Cow object বানাও (Day 12-এর মতো), makeSound() call করো

*/




#include <iostream>
using namespace std;

class Animal{
public:
    virtual string makeSound()=0;

};
class Cat : public Animal{
public:
    string makeSound(){

    return "Meow";
    }

};
class Cow : public Animal{
public:
    string makeSound(){

    return "Hamba";
    }


};
int main(){
Animal *ptr=new Cat();
cout<<"cat:"<<ptr->makeSound()<<endl;
Animal *ptr2=new Cow();
cout<<"Cow"<<ptr2->makeSound()<<endl;
Cow c1;
cout<<"Sound of a cow:"<<c1.makeSound()<<endl;
Cat cat1;
cout<<"Sound of a cat:"<<cat1.makeSound();

return 0;
}
