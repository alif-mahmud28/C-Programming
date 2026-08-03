#include <iostream>
using namespace std;
int max_value(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int find_factorial(int c){

int sum=1;
for(int i=1;i<=c;i++){
    sum*=i;

}
return sum;

}


void call_by_ref(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
void greet(string name="Friend"){
cout<<"My name is "<<name<<endl;

}

void area(float a){

    cout<<"The area of the square is:"<<a*a<<endl;

}
void area(float a,float b){
    cout<<"The area of a ractangular is:"<<a*b<<endl;
}



int main(){
    int num1 = 5, num2 = 10;
    cout << "Before swap: num1=" << num1 << ", num2=" << num2 << endl;
    call_by_ref(num1, num2);
    cout << "After swap: num1=" << num1 << ", num2=" << num2 << endl;
    greet("Alif mahmud");
    area(5);
    area(4,5);
   return 0;
}
