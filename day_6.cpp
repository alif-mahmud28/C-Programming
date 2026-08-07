
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
