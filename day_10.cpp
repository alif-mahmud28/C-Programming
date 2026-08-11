/*

**Problem 1: BankAccount Class (Classic Encapsulation Example)
একটা BankAccount class বানাও:
private attributes: accountHolder (string), balance (float)
Constructor: নাম আর starting balance নিয়ে সেট করবে
public methods:
deposit(float amount) — balance বাড়াবে, কিন্তু amount negative হলে "Invalid deposit amount" বলবে
withdraw(float amount) — balance কমাবে, কিন্তু withdraw করার amount balance-এর চেয়ে বেশি হলে "Insufficient balance" বলবে
getBalance() — balance রিটার্ন করবে
displayInfo() — account holder-এর নাম আর balance দেখাবে
main()-এ একটা account বানাও, কিছু deposit/withdraw করে test করো (valid আর invalid দুই রকম amount দিয়ে)।


**Problem 2: Student Class (Getter-Setter সহ পুনর্লিখন)
Day 9-এর Student class-টা নাও, এখন name, roll, marks সব private বানাও। Getter (getName(), getRoll(), getMarks()) আর Setter (setMarks() — শুধু 0-100 range-এ valid হলে সেট হবে) যোগ করো।


*/


#include <iostream>
using namespace std;

//Problem 1 class:
class BankAccount{
private:
    string accountHolder;
    float balance;

public:

    BankAccount(string accountHolder,float balance ){
        this->accountHolder=accountHolder;
        if(balance<=0){
            cout<<"Invalid money"<<endl;
        }
        else{
            this->balance=balance;
        }
    }
    void deposite(float amount){

        if(amount<=0){

            cout<<"Invalid deposit amount"<<endl;
        }
        else{

            balance+=amount;

        }
    }
    void withdraw(float amount){
    if(amount>=balance){
        cout<<"Insufficient balance to withdraw"<<endl;
    }
    else if(amount<=0){
        cout<<"Invalid balance withdraw"<<endl;
    }
    else{
        balance-=amount;
    }

    }
    void getBalance(){

    cout<<"Your balance is:"<<balance<<endl;

    }
    void displayInfo(){

    cout<<"Account holder name:"<<accountHolder<<endl;
    cout<<"Balance:"<<balance<<endl;

    }

};



//Problem 2 class:
class Student{
private:
    string name;
    int roll;
    float marks;

public:
    void setname(string n){
    name=n;
    }
    void setroll(int r){
    roll=r;
    }
    void setMarks(float mark){
    if(mark>0 && mark<=100){
        marks=mark;
    }
    else{
        cout<<"Invalid marks."<<endl;
    }
    }
    void displayInfo(){
    cout<<"Student name:"<<name<<endl;
    cout<<"Student roll:"<<roll<<endl;
    cout<<"Student marks:"<<marks<<endl;

    }

};

int main(){
    //Problem 1 object
    BankAccount b1("Ope",700);
    b1.deposite(5000);
    b1.withdraw(-7);
    b1.getBalance();
    b1.displayInfo();



    //Problem 2 object
    Student s1;
    s1.setname("Alif");
    s1.setroll(28);
    s1.setMarks(89.7);
    s1.displayInfo();


}
