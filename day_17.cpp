/*

Problem 1: Basic Set Practice

একটা set<int> বানাও, ৭-৮টা সংখ্যা insert() করো (কিছু duplicate সহ ইচ্ছাকৃতভাবে), তারপর প্রিন্ট করে দেখো কতগুলো unique সংখ্যা আছে (size() দিয়েও verify করো)।

Problem 2: Array/Vector থেকে Duplicate সরানো (আজকের মূল লক্ষ্য)

একটা vector<int> বানাও (কিছু duplicate সহ), set ব্যবহার করে duplicate সরিয়ে ফেলো (উপরের উদাহরণের মতো), তারপর unique ভ্যালুগুলো প্রিন্ট করো।

Problem 3: Set দিয়ে দ্রুত "আছে কিনা" চেক

একটা set<string> বানাও ৫টা শহরের নাম দিয়ে (যেমন "Dhaka", "Chittagong" ইত্যাদি)। ইউজার থেকে একটা শহরের নাম ইনপুট নিয়ে, find() ব্যবহার করে সেটা set-এ আছে কিনা চেক করো।

*/


//Problem 1 & 2:


#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>number={10,20,30,40,10,20,50,30,40,100,120,100,30,50,70,80,20};
cout<<"Size of the vector:"<<number.size()<<endl;

set<int>uniqueNumber;

for(auto x:number){

    uniqueNumber.insert(x);

}
cout<<"Unique number:";
for(auto x:uniqueNumber){
    cout<<x<<" ";
}
cout<<endl;
cout<<"Unique number set size:"<<uniqueNumber.size()<<endl;
cout<<"Duplicate number size:"<<number.size()-uniqueNumber.size();

}


//Problem 3:

#include<bits/stdc++.h>
using namespace std;

int main(){


set<string>city={"Dhaka","Barishal","Rongpur","Sylet","Dinajgpur","Chittagong"};

string searchCity;
cout<<"Enter a city name:";
cin>>searchCity;

if(city.find(searchCity)!=city.end()){
    cout<<"Found"<<endl;

}else{
    cout<<"Not Found";
}


}
