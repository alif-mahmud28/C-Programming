/*
💻 আজকের Practice Problems (৫টা)
একটা খালি vector বানাও, ইউজার থেকে ৫টা সংখ্যা ইনপুট নিয়ে push_back() দিয়ে যোগ করো, তারপর সব প্রিন্ট করো (range-based for loop দিয়ে)
একটা vector-এ সবচেয়ে বড় আর ছোট ভ্যালু বের করো (Day 3-এর array logic-টাই vector-এ প্রয়োগ করো)
একটা vector থেকে শেষ element মুছে ফেলো (pop_back()), তারপর নতুন size() প্রিন্ট করো
একটা vector-এর মাঝখানে (কোনো একটা নির্দিষ্ট index-এ) একটা নতুন element insert() দিয়ে বসাও, তারপর পুরো vector প্রিন্ট করো (আগে-পরে দুটোই দেখাও)
একটা vector-এ একটা নির্দিষ্ট ভ্যালু আছে কিনা loop দিয়ে খুঁজে বের করো (Linear Search, কিন্তু এবার array-এর বদলে vector-এ)


*/


//Problem 1

#include <iostream>
#include <vector>
using namespace std;


int main(){

vector<int>v;
int n,num;
cout<<"How many elements you want in your array?";
cin>>n;
cout<<endl;
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>num;
    v.push_back(num);
}
cout<<"Here is your array:";
for(int x:v){

    cout<<x<<" ";
}



}
//Problem 2
#include <iostream>
#include <vector>
using namespace std;


int main(){

vector<int>v={10,30,400,49,89};

int maximum=v[0];
for(int i=1;i<v.size();i++){

if(v[i]>maximum){
    maximum=v[i];
}

}
cout<<"max:"<<maximum<<endl;
int minimum=v[0];
for(int i=1;i<v.size();i++){

if(v[i]<minimum){
    minimum=v[i];
}

}
cout<<"min:"<<minimum;

}




//Problem 3
#include <iostream>
#include <vector>
using namespace std;


int main(){

vector<int>v={10,30,50,40};

cout<<"Before:";
for(int i:v){

    cout<<i<<" ";
}
cout<<endl;
cout<<"Size before pop:"<<v.size();
cout<<endl;
v.pop_back();
cout<<"After pop_back:";
for(int x:v){
    cout<<x<<" ";
}
cout<<endl;
cout<<"Size after pop:"<<v.size();



}


//Problem 4:
#include <iostream>
#include <vector>
using namespace std;


int main(){

vector<int>v={30,50,60,59,79,7};

cout<<"Before size:"<<v.size()<<endl;

v.insert(v.begin()+1,60);
for(int x:v){

    cout<<x<<" ";
}
cout<<endl;

cout<<"After size:"<<v.size()<<endl;

}


//Problem 5:
#include <iostream>
#include <vector>
using namespace std;


int main(){

int value=90;

vector<int>v={30,40,50,50,70,90};
int c=1;
for(int x:v){
    if(x==value){
        cout<<"Found";
        c=0;

    }

}
if(c==1){
    cout<<"Not found";
}

}
