#include <iostream>
using namespace std;

class LibraryItem{
public:
    string title;
    bool isAvailable;

    LibraryItem(string t){
    title=t;
    isAvailable=true;


    }
    virtual void displayInfo()=0;

};

class Book: public LibraryItem{
public:
    string author;

    Book(string t,string author):LibraryItem(t){

    this->author=author;

    }
    void displayInfo(){
    cout<<"[Book] title:"<<title<<" Author name:"<<author<<endl;
    if(!isAvailable){
        cout<<"Not available"<<endl;
    }else{
    cout<<"Available"<<endl;
    }

    }
};
class Magazine:public LibraryItem{
public:
    int issuNumber;
    Magazine(string t,int num):LibraryItem(t){

    issuNumber=num;

    }
    void displayInfo(){
    cout<<"[Magazine] title:"<<title<<"IsIssue:"<<issuNumber<<endl;
    }


};

int main(){

    LibraryItem *ptr=new Book("Alif","Ope");
    LibraryItem *ptr1=new Magazine("Suma",33);

    ptr->displayInfo();
    ptr1->displayInfo();




}
