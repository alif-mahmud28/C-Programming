/*

Problem 1: Stack Basics
একটা stack<int> বানাও, ৫টা সংখ্যা push() করো, তারপর একটা while loop দিয়ে (!s.empty() চেক করে) সবগুলো pop() করে প্রিন্ট করো। লক্ষ্য করো output-এর ক্রম কী আসে (LIFO অনুযায়ী)।

Problem 2: Queue Basics
একইভাবে একটা queue<int> বানাও, ৫টা সংখ্যা push() করো, while loop দিয়ে সব pop() করে প্রিন্ট করো। Output-এর ক্রম Stack-এর থেকে কীভাবে আলাদা লক্ষ্য করো (FIFO)।

Problem 3: Balanced Parentheses (আজকের মূল challenge)
উপরের isBalanced() function নিজে হাতে টাইপ করে (দেখে দেখে না, বুঝে বুঝে) লেখো, তারপর main()-এ কয়েকটা string দিয়ে টেস্ট করো:
"(a+b)" → true
"{[a+b]}" → true
"(a+b]" → false
"(a+b" → false

*/

//Problem 1:
#include <bits/stdc++.h>
using namespace std;

int main(){

stack<int>number;
number.push(10);
number.push(20);
number.push(30);
number.push(40);
number.push(50);
number.push(60);
while(!number.empty()){

    cout<<number.top()<<endl;
    number.pop();

}

cout<<endl;
//Problem 2:
queue<int>number2;
number2.push(10);
number2.push(20);
number2.push(30);
number2.push(40);
number2.push(50);
number2.push(60);
while(!number2.empty()){
    cout<<number2.front()<<endl;
    number2.pop();

}


}
//Problem 3:

#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    stack<char>st;

    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        }
        else if(c == ')' || c == '}' || c == ']'){
            if(st.empty()){
                return false;
            }
            char top=st.top();
            if((c==')' && top=='(')||
               (c=='}' && top=='{')||
               (c==']' && top=='[')){
                st.pop();
               }else{
                    return false;
               }
        }
    }
    return st.empty();
}

int main(){
bool num=isBalanced("(a+b]");
if(num){
    cout<<"Balanced";
}
else{
    cout<<"Not Balanced";
}


}
