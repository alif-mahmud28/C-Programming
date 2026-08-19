/*
Problem 1: Basic Pair Practice

৩ জন student-এর নাম আর marks pair<string, float> দিয়ে একটা vector-এ রাখো, তারপর সবার নাম-marks প্রিন্ট করো।

Problem 2: Map দিয়ে Student Marks Lookup

map<string, float> বানাও যেখানে key = student name, value = marks। ৩-৪ জন student যোগ করো, তারপর ইউজার থেকে একটা নাম ইনপুট নিয়ে সেই student-এর marks দেখাও (যদি না থাকে, "Not found" দেখাও — find() ব্যবহার করে)।

Problem 3: Word Frequency Counter (আজকের মূল লক্ষ্য)

একটা sentence (কয়েকটা শব্দ, তুমি হার্ডকোড করতে পারো একটা vector<string> হিসেবে, অথবা ইনপুট নিয়ে split করার চেষ্টা করতে পারো) নিয়ে, map<string,int> ব্যবহার করে প্রতিটা শব্দ কতবার এসেছে গুনে বের করো, তারপর সব প্রিন্ট করো।

*/



//Problem 1:
#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<pair<string,float>>students;
   students.push_back({"Alif",22.5});
   students.push_back({"Abir",25.5});
   students.push_back({"Ope",29.5});
   for(auto x:students){
    cout<<"Name:"<<x.first<<" Marks:"<<x.second<<endl;
   }
}


//Problem 2:
#include <bits/stdc++.h>
using namespace std;
int main(){
 map<string,float>marks;
 marks["Alif"]=89;
 marks["Abir"]=88;
 marks["Ope"]=78;
 string name;
 cout<<"Enter a name:";
 cin>>name;
 if(marks.find(name)!= marks.end()){
    cout<<"His marks:"<<marks[name];
 }else{
 cout<<"Not found";
 }
}

//Problem 3
#include <bits/stdc++.h>
using namespace std;

int main(){


vector<string> words = {"apple", "banana", "apple", "orange", "banana", "apple"};

map<string,int>freq;

for(auto x:words){

    freq[x]+=1;

}

for(auto y:freq){
    cout<<y.first<<"-"<<y.second<<endl;
}



}




