//💻 আজকের Practice Problems (৪টা)
// 1.একটা int variable বানাও, তার address আর ভ্যালু দুটোই print করো (pointer ব্যবহার করে)
// 4. একটা pointer দিয়ে একটা variable-এর ভ্যালু বদলাও (dereference করে) — বদলানোর আগে আর পরে দুটোই print করো
// 3.  Pointer ব্যবহার করে একটা swap ফাংশন লেখো (উপরের উদাহরণ দেখে না লিখে, নিজে চেষ্টা করো)
// 2. একটা array আর তার প্রথম element-এর pointer নিয়ে experiment করো:

#include <iostream>
#include <string>
using namespace std;
void swap_func(int *x,int *y){

    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
//Problem 1:
int num = 10;
int *ptr=&num;
cout<<ptr<<endl;
cout<<*ptr<<endl;


//Problem 2:
int num1=100;
int *ptr1=&num1;
cout<<"Before change:"<<num1<<endl;
*ptr1=1000;
cout<<"After change:"<<num1<<endl;

//Problem 3:

int a=10,b=20;
cout<<"Before a,b:"<<a<<" "<<b<<endl;

swap_func(&a,&b);

cout<<"After a,b:"<<a<<" "<<b<<endl;


//problem 4:
int arr[5]={10,20,30,40,50};

int *a_ptr=arr;
cout<<*a_ptr<<endl;//print array's first element;
cout<<a_ptr<<endl;
cout<<a_ptr+1<<endl;//print array's 2nd element address;
cout<<*(a_ptr+1)<<endl;//print array's 2nd element;


}
