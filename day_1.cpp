#include <iostream>
using namespace std;
int main(){
//1.input 2 num then sum
int a,b,sum;
cout<<"Enter 1st num:";
cin>>a;
cout<<"Enter 2nd num:";
cin>>b;

cout<<"Sum is :"<<a+b<<endl;

//2 findout a number is ever or odd.
int num3;
cout<<"Enter a number:";
cin>>num3;
if(num3%2==0){
    cout<<"Even"<<endl;

}
else{
    cout<<"Odd";
}
//3 sum 1 to 100
int sum1=0;
for(int i=1;i<=100;i++){
    sum1+=i;

}
cout<<"Sum is:"<<sum1;

//prime check
int num4,flg=0;
cout<<"Enter a number:";
cin>>num4;
if (num4<=1){
    cout<<"Not a prime num";
}
else{
    for(int j=2;j<=(num4/2);j++){
        if(num4%j==0){
        flg+=1;
        }

    }
    if(flg==0){
    cout<<"Prime";
    }
    else{
    cout<<"Not a Prime";
    }
}

//multiplication table

int num5;
cout<<"Enter a number:";
cin>>num5;
for(int i=1;i<=10;i++){
    cout<<num5<<"X"<<i<<"="<<num5*i<<endl;
}

















return 0;
}
